#include "main.h"
#include "MPC_math.h"
#include "MPC_core.h"
#include "MPC_feedback.h"
#include "untitled0.h"
#include "rtwtypes.h"


#include "ai_datatypes_defines.h"
#include "ai_platform.h"
#include "network.h"
#include "network_data.h"

__attribute__((section(".rxBuffer"),used)) uint32_t Iab[3];
__attribute__((section(".rxBuffer"),used)) uint32_t Icd[1];



ai_error ai_err;
ai_i32 nbatch;
ai_handle network = AI_HANDLE_NULL;

// Buffers used to store input and output tensors
AI_ALIGNED(4) ai_i8 in_data[AI_NETWORK_IN_1_SIZE_BYTES];
AI_ALIGNED(4) ai_i8 out_data[AI_NETWORK_OUT_1_SIZE_BYTES];

// Initialize wrapper structs that hold pointers to data and info about the
// data (tensor height, width, channels)
ai_buffer ai_input[AI_NETWORK_IN_NUM] = AI_NETWORK_IN;
ai_buffer ai_output[AI_NETWORK_OUT_NUM] = AI_NETWORK_OUT;


/**
 * This function computes rotor position
 *
 */
uint16_t x = 1;
uint8_t switchANN = 0;

void computePositionWithEncoder(){
//	rtU.y[0] = ((float)Ia)/1230;
//	rtU.y[1] = ((float)Ib)/1230;
//	rtU.y[2] = ((float)Ic)/1230;
//
//	untitled0_step();

//	arr = arr_old;

	for(uint16_t i=0;i<19;i++){
		((ai_float *)in_data)[i] = ((ai_float *)in_data)[i+1];
		((ai_float *)in_data)[i+20] = ((ai_float *)in_data)[i+21];
		((ai_float *)in_data)[i+40] = ((ai_float *)in_data)[i+41];
		((ai_float *)in_data)[i+60] = ((ai_float *)in_data)[i+61];
	}

	((ai_float *)in_data)[19] = Valbt.alpha/7;
	((ai_float *)in_data)[39] = Valbt.beta/7;
	((ai_float *)in_data)[59] = Ialbt.alpha/1230;
	((ai_float *)in_data)[79] = Ialbt.beta/1230;
	runANN();


//	for(uint16_t i=0; i<5; i++){
//		rtU.y[i] = rtU.y[i+1];
//		rtU.y[i+6] = rtU.y[i+7];
//		rtU.y[i+12] = rtU.y[i+13];
//		rtU.y[i+18] = rtU.y[i+19];
//	}
//
//	for(uint16_t i=0;i<4;i++){
//		rtU.y[i+24] = rtU.y[i+25];
//	}
//
//	rtU.y[5] = Valbt.alpha/7;
//	rtU.y[11] = Valbt.beta/7;
//	rtU.y[17] = Ialbt.alpha/1230;
//	rtU.y[23] = Ialbt.beta/1230;
//	rtU.y[28] = annOut;
//
//	untitled0_step();
//	annOut = rtY.Out1;


//	if(switchANN){
//		thetaElec = annOut + 180;
//	} else {
		thetaElec = 90 + 360*TIM3->CNT/300;
//	}

	if(thetaElec >= 360){
		thetaElec -= 360;
	}

	if(thetaElec != thetaElecOld){
		dTheta = thetaElec - thetaElecOld;
		if(dTheta > 300){
			dTheta -= 360;
		} else if (dTheta < -300){
			dTheta += 360;
		}

		thetaElecOld = thetaElec;

		speedTemp = dTheta*672/x;

		x = 1;

		if(k>9){
			sum += (speedTemp - speedArr[e]);
			speedArr[e] = speedTemp;
			e++;

			if(e>9){
				e = 0;
			}
		} else {
			sum += speedTemp;
			speedArr[k] = speedTemp;
			k++;
		}

		speed = (19*speed + sum/10)/20;
//		speed = (95*speed + 5*speedTemp)/100;

		wr = (float)speed*1047/10000;

		if(speedPIrate>9){
			SpeedPIController();
			speedPIrate = 0;
		} else {
			speedPIrate++;
		}

	} else {
		x++;
	}
}



/**
 * This function computes 2 phase currents and 2 BEMFs
 *
 */
void measureADC(){
	HAL_ADC_Start_DMA(&hadc3, Icd, 1);
	HAL_ADC_Start_DMA(&hadc1, Iab, 2);

	// Compute abc currents
	Ia = -(((int16_t)Iab[0])-1935);
	Ib = -((int16_t)Iab[1]-1935);
	Ic = -((int16_t)Icd[0]-1930);

//	Vbus = ((int16_t)Icd[1]) + 1;

	if(startOCwatch && (Ia > 1000 || Ia < -1000
	  || Ib > 1000 || Ib < -1000
	  || Ic > 1000 || Ic < -1000)){
		stopMotor();
	}

	// Compute rotor position
	computePositionWithEncoder();
}


void initANN(){
	// Chunk of memory used to hold intermediate values for neural network
	AI_ALIGNED(4) ai_u8 activations[AI_NETWORK_DATA_ACTIVATIONS_SIZE];


	// Set working memory and get weights/biases from model
	ai_network_params ai_params = {
	  AI_NETWORK_DATA_WEIGHTS(ai_network_data_weights_get()),
	  AI_NETWORK_DATA_ACTIVATIONS(activations)
	};

	// Set pointers wrapper structs to our data buffers
	ai_input[0].n_batches = 1;
	ai_input[0].data = AI_HANDLE_PTR(in_data);

	ai_output[0].n_batches = 1;
	ai_output[0].data = AI_HANDLE_PTR(out_data);


	// Create instance of neural network
	ai_err = ai_network_create(&network, AI_NETWORK_DATA_CONFIG);
	if (ai_err.type != AI_ERROR_NONE)
	{
		Error_Handler();
	}

	// Initialize neural network
	if (!ai_network_init(network, &ai_params))
	{
		Error_Handler();
	}
}


float annOut;
void runANN(){
//	// Fill input buffer (use test value)
//	for (uint32_t i=0;i<AI_NETWORK_IN_1_SIZE;i++){
//		((ai_float *)in_data)[i] = (ai_float)2.0f;
//	}

	// Perform inference
	nbatch = ai_network_run(network, &ai_input[0], &ai_output[0]);
	if (nbatch != 1) {
	  Error_Handler();
	}

	// Read output (predicted y) of neural network
	annOut = 180*((float *)out_data)[0];


	if(annOut < -180){
		annOut = -180;
	}
	if(annOut > 180){
		annOut = 180;
	}
}

void switchToANN(){
	switchANN = 1;
};
