#include "stdio.h"

#define DEBUG
#include "debug.h"
//#define DEBUG

int main(void)
{
  int i = 1, j = 2, k = 3;

#ifdef DEBUG
  printf("Output if DEBUG is defined:\n");
#else
  printf("Output if DEBUG is not defined:\n");
#endif

  PRINT_DEBUG(i++);
  printf("i = %d\n", i);
  PRINT_DEBUG(j);
  PRINT_DEBUG(k);
  PRINT_DEBUG(i + j);  // 如果定义了DEBUG，预处理完成后为：printf("Value of " "i + j" ": %d\n", i + j);  如果哦没定义，为;
  PRINT_DEBUG(2 * i + j -k);
  
  return 0;
}
