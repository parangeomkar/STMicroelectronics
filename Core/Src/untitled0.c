/*
 * File: untitled0.c
 *
 * Code generated for Simulink model 'untitled0'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Mar 29 16:11:45 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "untitled0.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void untitled0_step(void)
{
  real_T rtb_TmpSignalConversionAtDotPro[30];
  real_T tmp[10];
  real_T rtb_Delay1_idx_0;
  real_T rtb_Delay1_idx_1;
  real_T rtb_Delay1_idx_2;
  real_T rtb_Delay2_idx_0;
  real_T rtb_Delay2_idx_1;
  real_T rtb_Delay2_idx_2;
  real_T rtb_Delay3_idx_0;
  real_T rtb_Delay3_idx_1;
  real_T rtb_Delay3_idx_2;
  real_T rtb_Delay4_idx_0;
  real_T rtb_Delay4_idx_1;
  real_T rtb_Delay4_idx_2;
  real_T rtb_Delay5_idx_0;
  real_T rtb_Delay5_idx_1;
  real_T rtb_Delay5_idx_2;
  real_T rtb_Delay6_idx_0;
  real_T rtb_Delay6_idx_1;
  real_T rtb_Delay6_idx_2;
  real_T rtb_Delay7_idx_0;
  real_T rtb_Delay7_idx_1;
  real_T rtb_Delay7_idx_2;
  real_T rtb_Delay8_idx_0;
  real_T rtb_Delay8_idx_1;
  real_T rtb_Delay8_idx_2;
  real_T rtb_Delay9_idx_0;
  real_T rtb_Delay9_idx_1;
  real_T rtb_Delay9_idx_2;
  real_T rtb_DotProduct_0;
  real_T rtb_DotProduct_b_0;
  real_T rtb_DotProduct_c_0;
  real_T rtb_DotProduct_cu_0;
  real_T rtb_DotProduct_g_0;
  real_T rtb_DotProduct_i_0;
  real_T rtb_DotProduct_k_0;
  real_T rtb_DotProduct_kq_0;
  real_T rtb_DotProduct_n_0;
  real_T rtb_DotProduct_o_0;
  real_T rtb_TmpSignalConversionAtDotP_o;
  int32_T i;

  /* UnitDelay: '<S7>/Delay 1' */
  rtb_Delay1_idx_0 = rtDW.Delay1_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 2' */
  rtb_Delay2_idx_0 = rtDW.Delay2_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 3' */
  rtb_Delay3_idx_0 = rtDW.Delay3_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 4' */
  rtb_Delay4_idx_0 = rtDW.Delay4_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 5' */
  rtb_Delay5_idx_0 = rtDW.Delay5_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 6' */
  rtb_Delay6_idx_0 = rtDW.Delay6_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 7' */
  rtb_Delay7_idx_0 = rtDW.Delay7_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 8' */
  rtb_Delay8_idx_0 = rtDW.Delay8_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 9' */
  rtb_Delay9_idx_0 = rtDW.Delay9_DSTATE[0];

  /* SignalConversion generated from: '<S10>/Dot Product' incorporates:
   *  UnitDelay: '<S7>/Delay 1'
   *  UnitDelay: '<S7>/Delay 10'
   *  UnitDelay: '<S7>/Delay 2'
   *  UnitDelay: '<S7>/Delay 3'
   *  UnitDelay: '<S7>/Delay 4'
   *  UnitDelay: '<S7>/Delay 5'
   *  UnitDelay: '<S7>/Delay 6'
   *  UnitDelay: '<S7>/Delay 7'
   *  UnitDelay: '<S7>/Delay 8'
   *  UnitDelay: '<S7>/Delay 9'
   */
  rtb_TmpSignalConversionAtDotPro[0] = rtDW.Delay1_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[3] = rtDW.Delay2_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[6] = rtDW.Delay3_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[9] = rtDW.Delay4_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[12] = rtDW.Delay5_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[15] = rtDW.Delay6_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[18] = rtDW.Delay7_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[21] = rtDW.Delay8_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[24] = rtDW.Delay9_DSTATE[0];
  rtb_TmpSignalConversionAtDotPro[27] = rtDW.Delay10_DSTATE[0];

  /* UnitDelay: '<S7>/Delay 1' */
  rtb_Delay1_idx_1 = rtDW.Delay1_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 2' */
  rtb_Delay2_idx_1 = rtDW.Delay2_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 3' */
  rtb_Delay3_idx_1 = rtDW.Delay3_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 4' */
  rtb_Delay4_idx_1 = rtDW.Delay4_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 5' */
  rtb_Delay5_idx_1 = rtDW.Delay5_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 6' */
  rtb_Delay6_idx_1 = rtDW.Delay6_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 7' */
  rtb_Delay7_idx_1 = rtDW.Delay7_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 8' */
  rtb_Delay8_idx_1 = rtDW.Delay8_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 9' */
  rtb_Delay9_idx_1 = rtDW.Delay9_DSTATE[1];

  /* SignalConversion generated from: '<S10>/Dot Product' incorporates:
   *  UnitDelay: '<S7>/Delay 1'
   *  UnitDelay: '<S7>/Delay 10'
   *  UnitDelay: '<S7>/Delay 2'
   *  UnitDelay: '<S7>/Delay 3'
   *  UnitDelay: '<S7>/Delay 4'
   *  UnitDelay: '<S7>/Delay 5'
   *  UnitDelay: '<S7>/Delay 6'
   *  UnitDelay: '<S7>/Delay 7'
   *  UnitDelay: '<S7>/Delay 8'
   *  UnitDelay: '<S7>/Delay 9'
   */
  rtb_TmpSignalConversionAtDotPro[1] = rtDW.Delay1_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[4] = rtDW.Delay2_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[7] = rtDW.Delay3_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[10] = rtDW.Delay4_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[13] = rtDW.Delay5_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[16] = rtDW.Delay6_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[19] = rtDW.Delay7_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[22] = rtDW.Delay8_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[25] = rtDW.Delay9_DSTATE[1];
  rtb_TmpSignalConversionAtDotPro[28] = rtDW.Delay10_DSTATE[1];

  /* UnitDelay: '<S7>/Delay 1' */
  rtb_Delay1_idx_2 = rtDW.Delay1_DSTATE[2];

  /* UnitDelay: '<S7>/Delay 2' */
  rtb_Delay2_idx_2 = rtDW.Delay2_DSTATE[2];

  /* UnitDelay: '<S7>/Delay 3' */
  rtb_Delay3_idx_2 = rtDW.Delay3_DSTATE[2];

  /* UnitDelay: '<S7>/Delay 4' */
  rtb_Delay4_idx_2 = rtDW.Delay4_DSTATE[2];

  /* UnitDelay: '<S7>/Delay 5' */
  rtb_Delay5_idx_2 = rtDW.Delay5_DSTATE[2];

  /* UnitDelay: '<S7>/Delay 6' */
  rtb_Delay6_idx_2 = rtDW.Delay6_DSTATE[2];

  /* UnitDelay: '<S7>/Delay 7' */
  rtb_Delay7_idx_2 = rtDW.Delay7_DSTATE[2];

  /* UnitDelay: '<S7>/Delay 8' */
  rtb_Delay8_idx_2 = rtDW.Delay8_DSTATE[2];

  /* UnitDelay: '<S7>/Delay 9' */
  rtb_Delay9_idx_2 = rtDW.Delay9_DSTATE[2];

  /* SignalConversion generated from: '<S10>/Dot Product' incorporates:
   *  UnitDelay: '<S7>/Delay 1'
   *  UnitDelay: '<S7>/Delay 10'
   *  UnitDelay: '<S7>/Delay 2'
   *  UnitDelay: '<S7>/Delay 3'
   *  UnitDelay: '<S7>/Delay 4'
   *  UnitDelay: '<S7>/Delay 5'
   *  UnitDelay: '<S7>/Delay 6'
   *  UnitDelay: '<S7>/Delay 7'
   *  UnitDelay: '<S7>/Delay 8'
   *  UnitDelay: '<S7>/Delay 9'
   */
  rtb_TmpSignalConversionAtDotPro[2] = rtDW.Delay1_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[5] = rtDW.Delay2_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[8] = rtDW.Delay3_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[11] = rtDW.Delay4_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[14] = rtDW.Delay5_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[17] = rtDW.Delay6_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[20] = rtDW.Delay7_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[23] = rtDW.Delay8_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[26] = rtDW.Delay9_DSTATE[2];
  rtb_TmpSignalConversionAtDotPro[29] = rtDW.Delay10_DSTATE[2];

  /* DotProduct: '<S10>/Dot Product' */
  rtb_DotProduct_0 = 0.0;

  /* DotProduct: '<S12>/Dot Product' */
  rtb_DotProduct_b_0 = 0.0;

  /* DotProduct: '<S13>/Dot Product' */
  rtb_DotProduct_c_0 = 0.0;

  /* DotProduct: '<S14>/Dot Product' */
  rtb_DotProduct_k_0 = 0.0;

  /* DotProduct: '<S15>/Dot Product' */
  rtb_DotProduct_kq_0 = 0.0;

  /* DotProduct: '<S16>/Dot Product' */
  rtb_DotProduct_o_0 = 0.0;

  /* DotProduct: '<S17>/Dot Product' */
  rtb_DotProduct_n_0 = 0.0;

  /* DotProduct: '<S18>/Dot Product' */
  rtb_DotProduct_i_0 = 0.0;

  /* DotProduct: '<S19>/Dot Product' */
  rtb_DotProduct_g_0 = 0.0;

  /* DotProduct: '<S11>/Dot Product' */
  rtb_DotProduct_cu_0 = 0.0;
  for (i = 0; i < 30; i++) {
    /* DotProduct: '<S10>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(1,:)''
     */
    rtb_TmpSignalConversionAtDotP_o = rtb_TmpSignalConversionAtDotPro[i];
    rtb_DotProduct_0 += rtConstP.IW111_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S12>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(2,:)''
     */
    rtb_DotProduct_b_0 += rtConstP.IW112_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S13>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(3,:)''
     */
    rtb_DotProduct_c_0 += rtConstP.IW113_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S14>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(4,:)''
     */
    rtb_DotProduct_k_0 += rtConstP.IW114_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S15>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(5,:)''
     */
    rtb_DotProduct_kq_0 += rtConstP.IW115_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S16>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(6,:)''
     */
    rtb_DotProduct_o_0 += rtConstP.IW116_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S17>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(7,:)''
     */
    rtb_DotProduct_n_0 += rtConstP.IW117_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S18>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(8,:)''
     */
    rtb_DotProduct_i_0 += rtConstP.IW118_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S19>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(9,:)''
     */
    rtb_DotProduct_g_0 += rtConstP.IW119_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;

    /* DotProduct: '<S11>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(10,:)''
     */
    rtb_DotProduct_cu_0 += rtConstP.IW1110_Value[i] *
      rtb_TmpSignalConversionAtDotP_o;
  }

  /* Sum: '<S3>/netsum' incorporates:
   *  Constant: '<S3>/b{1}'
   *  DotProduct: '<S10>/Dot Product'
   *  DotProduct: '<S11>/Dot Product'
   *  DotProduct: '<S12>/Dot Product'
   *  DotProduct: '<S13>/Dot Product'
   *  DotProduct: '<S14>/Dot Product'
   *  DotProduct: '<S15>/Dot Product'
   *  DotProduct: '<S16>/Dot Product'
   *  DotProduct: '<S17>/Dot Product'
   *  DotProduct: '<S18>/Dot Product'
   *  DotProduct: '<S19>/Dot Product'
   *  Gain: '<S20>/Gain'
   */
  tmp[0] = (rtb_DotProduct_0 + -1.2903962791142483) * -2.0;
  tmp[1] = (rtb_DotProduct_b_0 + 0.78835545948059638) * -2.0;
  tmp[2] = (rtb_DotProduct_c_0 + -3.0487265066055906) * -2.0;
  tmp[3] = (rtb_DotProduct_k_0 + 1.2625101579999842) * -2.0;
  tmp[4] = (rtb_DotProduct_kq_0 + 0.91998809074289289) * -2.0;
  tmp[5] = (rtb_DotProduct_o_0 + -0.36688629359999392) * -2.0;
  tmp[6] = (rtb_DotProduct_n_0 + -2.4145524075633933) * -2.0;
  tmp[7] = (rtb_DotProduct_i_0 + 17.5956973218848) * -2.0;
  tmp[8] = (rtb_DotProduct_g_0 + -8.394824834753539) * -2.0;
  tmp[9] = (rtb_DotProduct_cu_0 + 7.22353017883491) * -2.0;

  /* DotProduct: '<S24>/Dot Product' incorporates:
   *  Constant: '<S20>/one'
   *  Constant: '<S20>/one1'
   *  Constant: '<S22>/IW{2,1}(1,:)''
   *  Gain: '<S20>/Gain1'
   *  Math: '<S20>/Exp'
   *  Math: '<S20>/Reciprocal'
   *  Sum: '<S20>/Sum'
   *  Sum: '<S20>/Sum1'
   *
   * About '<S20>/Exp':
   *  Operator: exp
   *
   * About '<S20>/Reciprocal':
   *  Operator: reciprocal
   */
  rtb_DotProduct_0 = 0.0;
  for (i = 0; i < 10; i++) {
    rtb_DotProduct_0 += (1.0 / (exp(tmp[i]) + 1.0) * 2.0 - 1.0) *
      rtConstP.IW211_Value[i];
  }

  /* Outport: '<Root>/Out1' incorporates:
   *  Bias: '<S26>/Subtract min y'
   *  Constant: '<S4>/b{2}'
   *  DotProduct: '<S24>/Dot Product'
   *  Gain: '<S26>/Divide by range y'
   *  Sum: '<S4>/netsum'
   */
  rtY.Out1 = ((rtb_DotProduct_0 + -0.15771479638179803) + 1.0) *
    0.49722222222222223;

  /* Update for UnitDelay: '<S7>/Delay 1' incorporates:
   *  Bias: '<S25>/Add min y'
   *  Bias: '<S25>/Subtract min x'
   *  Gain: '<S25>/range y // range x'
   *  Inport: '<Root>/In1'
   */
  rtDW.Delay1_DSTATE[0] = (rtU.y[0] + 0.394641104863821) * 2.2173737743410196 +
    -1.0;

  /* Update for UnitDelay: '<S7>/Delay 2' */
  rtDW.Delay2_DSTATE[0] = rtb_Delay1_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 3' */
  rtDW.Delay3_DSTATE[0] = rtb_Delay2_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 4' */
  rtDW.Delay4_DSTATE[0] = rtb_Delay3_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 5' */
  rtDW.Delay5_DSTATE[0] = rtb_Delay4_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 6' */
  rtDW.Delay6_DSTATE[0] = rtb_Delay5_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 7' */
  rtDW.Delay7_DSTATE[0] = rtb_Delay6_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 8' */
  rtDW.Delay8_DSTATE[0] = rtb_Delay7_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 9' */
  rtDW.Delay9_DSTATE[0] = rtb_Delay8_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 10' */
  rtDW.Delay10_DSTATE[0] = rtb_Delay9_idx_0;

  /* Update for UnitDelay: '<S7>/Delay 1' incorporates:
   *  Bias: '<S25>/Add min y'
   *  Bias: '<S25>/Subtract min x'
   *  Gain: '<S25>/range y // range x'
   *  Inport: '<Root>/In1'
   */
  rtDW.Delay1_DSTATE[1] = (rtU.y[1] + 0.38584043352570718) * 2.3473444125689715
    + -1.0;

  /* Update for UnitDelay: '<S7>/Delay 2' */
  rtDW.Delay2_DSTATE[1] = rtb_Delay1_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 3' */
  rtDW.Delay3_DSTATE[1] = rtb_Delay2_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 4' */
  rtDW.Delay4_DSTATE[1] = rtb_Delay3_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 5' */
  rtDW.Delay5_DSTATE[1] = rtb_Delay4_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 6' */
  rtDW.Delay6_DSTATE[1] = rtb_Delay5_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 7' */
  rtDW.Delay7_DSTATE[1] = rtb_Delay6_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 8' */
  rtDW.Delay8_DSTATE[1] = rtb_Delay7_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 9' */
  rtDW.Delay9_DSTATE[1] = rtb_Delay8_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 10' */
  rtDW.Delay10_DSTATE[1] = rtb_Delay9_idx_1;

  /* Update for UnitDelay: '<S7>/Delay 1' incorporates:
   *  Bias: '<S25>/Add min y'
   *  Bias: '<S25>/Subtract min x'
   *  Gain: '<S25>/range y // range x'
   *  Inport: '<Root>/In1'
   */
  rtDW.Delay1_DSTATE[2] = (rtU.y[2] + 0.39878808788749737) * 2.2278218679036339
    + -1.0;

  /* Update for UnitDelay: '<S7>/Delay 2' */
  rtDW.Delay2_DSTATE[2] = rtb_Delay1_idx_2;

  /* Update for UnitDelay: '<S7>/Delay 3' */
  rtDW.Delay3_DSTATE[2] = rtb_Delay2_idx_2;

  /* Update for UnitDelay: '<S7>/Delay 4' */
  rtDW.Delay4_DSTATE[2] = rtb_Delay3_idx_2;

  /* Update for UnitDelay: '<S7>/Delay 5' */
  rtDW.Delay5_DSTATE[2] = rtb_Delay4_idx_2;

  /* Update for UnitDelay: '<S7>/Delay 6' */
  rtDW.Delay6_DSTATE[2] = rtb_Delay5_idx_2;

  /* Update for UnitDelay: '<S7>/Delay 7' */
  rtDW.Delay7_DSTATE[2] = rtb_Delay6_idx_2;

  /* Update for UnitDelay: '<S7>/Delay 8' */
  rtDW.Delay8_DSTATE[2] = rtb_Delay7_idx_2;

  /* Update for UnitDelay: '<S7>/Delay 9' */
  rtDW.Delay9_DSTATE[2] = rtb_Delay8_idx_2;

  /* Update for UnitDelay: '<S7>/Delay 10' */
  rtDW.Delay10_DSTATE[2] = rtb_Delay9_idx_2;
}

/* Model initialize function */
void untitled0_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
