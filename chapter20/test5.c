#include <stdio.h>

#define MY_COLOR(b,g,r) ((long int) ((((b)&(0xFF))<<16) | (((g)&(0xFF))<<8) | ((r)&(0xFF))))
#define GET_RED(c) ((long) ((c) & 0xFF))
#define GET_GREEN(c) ((long) (((c) >> 8) & 0xFF))
#define GET_BLUE(c) ((long) (((c) >> 16) & 0xFF))

int main(void)
{
  long int i;
  i = MY_COLOR(1,2,3);
  printf("MY_COLOR %lx\n", i);
  printf("GET_RED %lx\n", GET_RED(i));
  printf("GET_GREEN %lx\n", GET_GREEN(i));
  printf("GET_BLUE %lx\n", GET_BLUE(i));

  return 0;
}

// 官网答案
// #define MK_COLOR(r,g,b) ((long) (b) << 16 | (g) << 8 | (r))
