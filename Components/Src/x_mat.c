/* MATLAB GENERATED SOURCE FILE: x_mat.c */
#include "x_mat.h"
uint32_t X_DATA_UINT[X_ROWS*X_COLS] = 
{
  #include "x.csv"
};
float32_t* X_DATA = (float32_t*)X_DATA_UINT;
arm_matrix_instance_f32 x;
