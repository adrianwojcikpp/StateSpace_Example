/* MATLAB GENERATED SOURCE FILE: Bd_mat.c */
#include "Bd_mat.h"
uint32_t BD_DATA_UINT[2] = {
  #include "Bd.csv"
};
arm_matrix_instance_f32 Bd = {
   .numRows = 2,
   .numCols = 1,
   .pData = (float32_t*)BD_DATA_UINT
};
