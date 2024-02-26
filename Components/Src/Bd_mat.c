/* MATLAB GENERATED SOURCE FILE: Bd_mat.c */
#include "Bd_mat.h"
uint32_t BD_DATA_UINT[BD_ROWS*BD_COLS] = 
{
  #include "Bd.csv"
};
float32_t* BD_DATA = (float32_t*)BD_DATA_UINT;
arm_matrix_instance_f32 Bd;
