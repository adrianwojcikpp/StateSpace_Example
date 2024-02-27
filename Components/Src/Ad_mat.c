/* MATLAB GENERATED SOURCE FILE: Ad_mat.c */
#include "Ad_mat.h"
uint32_t AD_DATA_UINT[4] = {
  #include "Ad.csv"
};
arm_matrix_instance_f32 Ad = {
   .numRows = 2,
   .numCols = 2,
   .pData = (float32_t*)AD_DATA_UINT
};
