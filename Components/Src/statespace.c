/**
  ******************************************************************************
  * @file     : statespace.c
  * @author   : AW    Adrian.Wojcik@put.poznan.pl
  * @version  : 1.0.0
  * @date     : Feb 26, 2024
  * @brief    : Simple state space model implementation based on CMSIS DSP
  *
  ******************************************************************************
  */

/* Private includes ----------------------------------------------------------*/
#include "statespace.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Public variables ----------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Public function prototypes ------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

/**
 * @brief State space model update
 * @param[in/out] hmdl  : State space model handler
 * @param[in]     u     : Array with input values
 * @retval None
 */
void STATE_SPACE_UpdateState(STATE_SPACE_Handle_TypeDef* hmdl, float* u)
{
  for(unsigned int i = 0; i < hmdl->u->numRows; i++)
    hmdl->u->pData[i] = u[i];

  arm_mat_mult_f32(hmdl->Bd, hmdl->u, hmdl->Bd_u);
  arm_mat_mult_f32(hmdl->Ad, hmdl->x, hmdl->Ad_x);
  arm_mat_add_f32(hmdl->Ad_x, hmdl->Bd_u, hmdl->x); // new value of state vector x
}
