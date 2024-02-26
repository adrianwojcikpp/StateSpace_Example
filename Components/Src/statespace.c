/**
  ******************************************************************************
  * @file     : dio.c
  * @author   : AW    Adrian.Wojcik@put.poznan.pl
  * @version  : 1.3.0
  * @date     : Nov 27, 2022
  * @brief    : Digital inputs/outputs components driver.
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
 * @brief State space model initialization
 * @param[in/out] hmdl  : State space model handler
 * @retval None
 */
void STATE_SPACE_Init(STATE_SPACE_Handle_TypeDef* hmdl)
{
  // Initialize matrix instances
  arm_mat_init_f32(hmdl->Ad, AD_ROWS, AD_COLS, AD_DATA);
  arm_mat_init_f32(hmdl->Bd, BD_ROWS, BD_COLS, BD_DATA);

  arm_mat_init_f32(hmdl->x, X_ROWS, X_COLS, X_DATA);
  arm_mat_init_f32(hmdl->u, U_ROWS, U_COLS, U_DATA);

  arm_mat_init_f32(hmdl->Ad_x, AD_X_ROWS, AD_X_COLS, AD_X_DATA);
  arm_mat_init_f32(hmdl->Bd_u, BD_U_ROWS, BD_U_COLS, BD_U_DATA);
}

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
