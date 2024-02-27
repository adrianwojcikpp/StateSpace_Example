/**
  ******************************************************************************
  * @file     : statespace.h
  * @author   : AW    Adrian.Wojcik@put.poznan.pl
  * @version  : 1.0.0
  * @date     : Feb 26, 2024
  * @brief    : Simple state space model implementation based on CMSIS DSP
  *
  ******************************************************************************
  */

#ifndef INC_STATESPACE_H_
#define INC_STATESPACE_H_

/* Public includes -----------------------------------------------------------*/
#include "arm_math.h"

/* Public typedef ------------------------------------------------------------*/

typedef struct {
  // model matrices
  arm_matrix_instance_f32* Ad;
  arm_matrix_instance_f32* Bd;
  // signal vectors
  arm_matrix_instance_f32* x;
  arm_matrix_instance_f32* u;
  // temporary values
  arm_matrix_instance_f32* Ad_x;
  arm_matrix_instance_f32* Bd_u;
} STATE_SPACE_Handle_TypeDef;

/* Public define -------------------------------------------------------------*/

/* Public macro --------------------------------------------------------------*/

/* Public variables ----------------------------------------------------------*/

/* Public function prototypes ------------------------------------------------*/

/**
 * @brief State space model update
 * @param[in/out] hmdl  : State space model handler
 * @param[in]     u     : Array with input values
 * @retval None
 */
void STATE_SPACE_UpdateState(STATE_SPACE_Handle_TypeDef* hmdl, float* u);

#endif /* INC_STATESPACE_H_ */
