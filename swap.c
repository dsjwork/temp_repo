#include "swap.h"

void swap_int(int *a_arg1, int *a_arg2)
{
  int tmp;
  
  tmp = *a_arg1;
  *a_arg1 = *a_arg2;
  *a_arg2 = tmp;
}
