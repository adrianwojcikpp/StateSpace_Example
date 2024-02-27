/* MATLAB GENERATED SOURCE FILE: u_mat.c */
#include "u_mat.h"
uint32_t U_DATA_UINT[1] = {
  #include "u.csv"
};
arm_matrix_instance_f32 u = {
   .numRows = 1,
   .numCols = 1,
   .pData = (float32_t*)U_DATA_UINT
};
