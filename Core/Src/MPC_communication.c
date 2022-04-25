#include "main.h"
#include "MPC_math.h"
#include "MPC_core.h"
#include "MPC_PWM.h"
#include "MPC_feedback.h"
#include "MPC_communication.h"
#include "rtwtypes.h"
#include "untitled0.h"

// Variables used by transferUART()

__attribute__((section(".rxBuffer"),used)) uint8_t comCode[3];

void switchToANN();

uint8_t txData[10];
uint8_t comCode[3],startTx,testEnd;
uint8_t c = 0;
/**
 * This function transfers data over UART
 *
 */
int16_t arr[10000], idx;
uint32_t err,asdsda,nasd;
void transferUART(){
	if(startTx){
			txData[0] = ((thetaElec - 180 + 30000)) & 0xff;
			txData[1] = ((thetaElec - 180 + 30000) >> 8) & 0xff;

			txData[2] = ((uint16_t)(annOut*100 + 30000)) & 0xff;
			txData[3] = ((uint16_t)(annOut*100 + 30000) >> 8) & 0xff;

//			txData[2] = ((uint16_t)(Valbt.alpha*100 + 30000)) & 0xff;
//			txData[3] = ((uint16_t)(Valbt.alpha*100 + 30000) >> 8) & 0xff;

			txData[4] = ((uint16_t)(Valbt.beta*100 + 30000)) & 0xff;
			txData[5] = (((uint16_t)(Valbt.beta*100 + 30000)) >> 8) & 0xff;

			txData[6] = ((uint16_t)(Ialbt.alpha*100 + 30000)) & 0xff;
			txData[7] = (((uint16_t)(Ialbt.alpha*100 + 30000)) >> 8) & 0xff;

			txData[8] = ((uint16_t)(Ialbt.beta*100 + 30000)) & 0xff;
			txData[9] = (((uint16_t)(Ialbt.beta*100 + 30000)) >> 8) & 0xff;

			HAL_UART_Transmit(&huart3, txData,10,10);
//			asdsda++;
//			if(asdsda > 5000){
//				speedReq = 1500;
//			}
//		err += error;
//		if(testEnd){
//			txData[0] = (err) & 0xff;
//			txData[1] = (err >> 8) & 0xff;
//			txData[2] = (err >> 16) & 0xff;
//			txData[3] = (err >> 24) & 0xff;
//
//			HAL_UART_Transmit(&huart2, txData,4,10);
//			startTx = 0;
//			testEnd = 0;
//			err = 0;
//		}
	}
}

/**
 * This function initializes UART DMA receive
 *
 */
void receiveUART(){
	HAL_UART_Receive_DMA(&huart3, comCode, 3);
}


/**
 * This function is a handler for received data
 *
 */

void handleRxCommands(){

	if(comCode[0] == 101){
		startTx = 1;
		switchToANN();
	} else if(comCode[0] == 102){
//		testEnd = 1;
		startTx = 0;
	} else if(comCode[0] == 103){
		stopMotor();
	} else if(comCode[0] == 104){
		startMotor();
	} else if(comCode[0] == 105){
		sigma = comCode[1] + 256*comCode[2];
	} else if(comCode[0] == 106){
		delta = comCode[1] + 256*comCode[2];
	} else if(comCode[0] == 107){
		Kp = comCode[1] + 256*comCode[2];
	} else if(comCode[0] == 108){
		Ki = comCode[1] + 256*comCode[2];
	} else if(comCode[0] == 109){
		speedReq = comCode[1] + 256*comCode[2];
	} else if(comCode[0] == 110){
		HAL_NVIC_SystemReset();
	}
}
