/*
 * File: untitled0.c
 *
 * Code generated for Simulink model 'untitled0'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Mar 31 14:09:13 2022
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
  real_T tmp[5];
  real_T rtb_Addminx_0;
  real_T rtb_DotProduct_0;
  real_T rtb_DotProduct_a_0;
  real_T rtb_DotProduct_f_0;
  real_T rtb_DotProduct_p_0;
  int32_T i;

  /* DotProduct: '<S10>/Dot Product' */
  rtb_DotProduct_0 = 0.0;

  /* DotProduct: '<S11>/Dot Product' */
  rtb_DotProduct_p_0 = 0.0;

  /* DotProduct: '<S12>/Dot Product' */
  rtb_DotProduct_a_0 = 0.0;

  /* DotProduct: '<S13>/Dot Product' */
  rtb_DotProduct_f_0 = 0.0;

  /* DotProduct: '<S14>/Dot Product' */
  rtb_Addminx_0 = 0.0;
  for (i = 0; i < 29; i++) {
    /* DotProduct: '<S10>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(1,:)''
     *  UnitDelay: '<S7>/Delay 1'
     */
    rtb_DotProduct_0 += rtConstP.IW111_Value[i] * rtDW.Delay1_DSTATE[i];

    /* DotProduct: '<S11>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(2,:)''
     *  UnitDelay: '<S7>/Delay 1'
     */
    rtb_DotProduct_p_0 += rtConstP.IW112_Value[i] * rtDW.Delay1_DSTATE[i];

    /* DotProduct: '<S12>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(3,:)''
     *  UnitDelay: '<S7>/Delay 1'
     */
    rtb_DotProduct_a_0 += rtConstP.IW113_Value[i] * rtDW.Delay1_DSTATE[i];

    /* DotProduct: '<S13>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(4,:)''
     *  UnitDelay: '<S7>/Delay 1'
     */
    rtb_DotProduct_f_0 += rtConstP.IW114_Value[i] * rtDW.Delay1_DSTATE[i];

    /* DotProduct: '<S14>/Dot Product' incorporates:
     *  Constant: '<S8>/IW{1,1}(5,:)''
     *  UnitDelay: '<S7>/Delay 1'
     */
    rtb_Addminx_0 += rtConstP.IW115_Value[i] * rtDW.Delay1_DSTATE[i];
  }

  /* Sum: '<S3>/netsum' incorporates:
   *  Constant: '<S3>/b{1}'
   *  DotProduct: '<S10>/Dot Product'
   *  DotProduct: '<S11>/Dot Product'
   *  DotProduct: '<S12>/Dot Product'
   *  DotProduct: '<S13>/Dot Product'
   *  DotProduct: '<S14>/Dot Product'
   *  Gain: '<S9>/Gain'
   */
  tmp[0] = (rtb_DotProduct_0 + 1.6110981938575435) * -2.0;
  tmp[1] = (rtb_DotProduct_p_0 + -3.2677863863099064) * -2.0;
  tmp[2] = (rtb_DotProduct_a_0 + -1.672184804077627) * -2.0;
  tmp[3] = (rtb_DotProduct_f_0 + -0.007579960293162988) * -2.0;
  tmp[4] = (rtb_Addminx_0 + 1.3657720677291727) * -2.0;

  /* DotProduct: '<S18>/Dot Product' incorporates:
   *  Constant: '<S16>/IW{2,1}(1,:)''
   *  Constant: '<S9>/one'
   *  Constant: '<S9>/one1'
   *  Gain: '<S9>/Gain1'
   *  Math: '<S9>/Exp'
   *  Math: '<S9>/Reciprocal'
   *  Sum: '<S9>/Sum'
   *  Sum: '<S9>/Sum1'
   *
   * About '<S9>/Exp':
   *  Operator: exp
   *
   * About '<S9>/Reciprocal':
   *  Operator: reciprocal
   */
  rtb_DotProduct_0 = 0.0;
  for (i = 0; i < 5; i++) {
    rtb_DotProduct_0 += (1.0 / (exp(tmp[i]) + 1.0) * 2.0 - 1.0) *
      rtConstP.IW211_Value[i];
  }

  /* Bias: '<S20>/Add min x' incorporates:
   *  Bias: '<S20>/Subtract min y'
   *  Constant: '<S4>/b{2}'
   *  DotProduct: '<S18>/Dot Product'
   *  Gain: '<S20>/Divide by range y'
   *  Sum: '<S4>/netsum'
   */
  rtb_DotProduct_0 = ((rtb_DotProduct_0 + 0.015398687847034166) + 1.0) *
    0.99444444444444446 + -2.0;

  /* Saturate: '<S1>/Saturation' */
  if (rtb_DotProduct_0 > 1.0) {
    /* Outport: '<Root>/Out1' */
    rtY.Out1 = 1.0;
  } else if (rtb_DotProduct_0 < -1.0) {
    /* Outport: '<Root>/Out1' */
    rtY.Out1 = -1.0;
  } else {
    /* Outport: '<Root>/Out1' */
    rtY.Out1 = rtb_DotProduct_0;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Update for UnitDelay: '<S7>/Delay 1' incorporates:
   *  Bias: '<S19>/Add min y'
   *  Bias: '<S19>/Subtract min x'
   *  Gain: '<S19>/range y // range x'
   *  Inport: '<Root>/y'
   */
  for (i = 0; i < 29; i++) {
    rtDW.Delay1_DSTATE[i] = (rtU.y[i] + rtConstP.Subtractminx_Bias[i]) *
      rtConstP.rangeyrangex_Gain[i] + -1.0;
  }

  /* End of Update for UnitDelay: '<S7>/Delay 1' */
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
