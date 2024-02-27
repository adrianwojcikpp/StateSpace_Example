/**
  ******************************************************************************
  * @file     : statespace_config.c
  * @author   : AW    Adrian.Wojcik@put.poznan.pl
  * @version  : 1.0.0
  * @date     : Feb 26, 2024
  * @brief    : Simple state space model implementation based on CMSIS DSP
  *             Configuration file.
  *
  ******************************************************************************
  */

/* Private includes ----------------------------------------------------------*/
#include "statespace.h"

#include "Ad_mat.h"
#include "Bd_mat.h"

#include "x_mat.h"
#include "u_mat.h"

#include "Ad_x_mat.h"
#include "Bd_u_mat.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Public variables ----------------------------------------------------------*/
STATE_SPACE_Handle_TypeDef mdl = {
    .Ad = &Ad,
    .Bd = &Bd,
    .x = &x,
    .u = &u,
    .Ad_x = &Ad_x,
    .Bd_u = &Bd_u
};

/* Private function prototypes -----------------------------------------------*/

/* Public function prototypes ------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/
