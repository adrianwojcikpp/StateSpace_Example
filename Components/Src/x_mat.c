/* MATLAB GENERATED SOURCE FILE: x_mat.c */
#include "x_mat.h"
uint32_t X_DATA_UINT[2] = {
  #include "x.csv"
};
arm_matrix_instance_f32 x = {
   .numRows = 2,
   .numCols = 1,
   .pData = (float32_t*)X_DATA_UINT
};
