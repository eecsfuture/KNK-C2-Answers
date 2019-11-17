#include <stdio.h>

#define MY_COLOR(b,g,r) ((long int) ((((b)&(0xFF))<<16) | (((g)&(0xFF))<<8) | ((r)&(0xFF))))

int main(void)
{
  long int i;
  i = MY_COLOR(1,2,3);
  printf("%lx\n", i);

  return 0;
}

// 官网答案
// #define MK_COLOR(r,g,b) ((long) (b) << 16 | (g) << 8 | (r))
