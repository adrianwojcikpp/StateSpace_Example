/* MATLAB GENERATED SOURCE FILE: Bd_u_mat.c */
#include "Bd_u_mat.h"
uint32_t BD_U_DATA_UINT[2] = {
  #include "Bd_u.csv"
};
arm_matrix_instance_f32 Bd_u = {
   .numRows = 2,
   .numCols = 1,
   .pData = (float32_t*)BD_U_DATA_UINT
};
