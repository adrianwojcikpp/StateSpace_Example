/* MATLAB GENERATED SOURCE FILE: Ad_x_mat.c */
#include "Ad_x_mat.h"
uint32_t AD_X_DATA_UINT[2] = {
  #include "Ad_x.csv"
};
arm_matrix_instance_f32 Ad_x = {
   .numRows = 2,
   .numCols = 1,
   .pData = (float32_t*)AD_X_DATA_UINT
};
