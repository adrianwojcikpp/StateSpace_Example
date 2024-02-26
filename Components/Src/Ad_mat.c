/* MATLAB GENERATED SOURCE FILE: Ad_mat.c */
#include "Ad_mat.h"
uint32_t AD_DATA_UINT[AD_ROWS*AD_COLS] = 
{
  #include "Ad.csv"
};
float32_t* AD_DATA = (float32_t*)AD_DATA_UINT;
arm_matrix_instance_f32 Ad;
