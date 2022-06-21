#include "stdio.h"
#include "swap.h"

void test(void)
{
  int a = 111;
  int b = 222;

  swap_int(&a, &b)

  if((a != 222) || (b != 111))
    printf("swap_int() failed");
  else
    printf("swap_int() success");
}
