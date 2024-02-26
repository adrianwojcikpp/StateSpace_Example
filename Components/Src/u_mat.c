/* MATLAB GENERATED SOURCE FILE: u_mat.c */
#include "u_mat.h"
uint32_t U_DATA_UINT[U_ROWS*U_COLS] = 
{
  #include "u.csv"
};
float32_t* U_DATA = (float32_t*)U_DATA_UINT;
arm_matrix_instance_f32 u;
