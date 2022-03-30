#include "main.h"
#include "MPC_math.h"
#include "MPC_core.h"
#include "MPC_feedback.h"
#include "untitled0.h"
#include "rtwtypes.h"

__attribute__((section(".rxBuffer"),used)) uint32_t Iab[3];
__attribute__((section(".rxBuffer"),used)) uint32_t Icd[1];

/**
 * This function computes rotor position
 *
 */
uint16_t x = 1;
void computePositionWithEncoder(){
//	rtU.y[0] = ((float)Ia)/1230;
//	rtU.y[1] = ((float)Ib)/1230;
//	rtU.y[2] = ((float)Ic)/1230;
//
//	untitled0_step();

	thetaElec = 90 + 360*TIM3->CNT/300;


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
