#include <stdio.h>

int main(void)
{
  unsigned short i, j;
  i = 0x10;
  j = 4;
  i ^= 1 << j;  // opposite bit j
  printf("%d\n", i);  //  eaqual to ((i >> (1 + j)) >> 1)

  
  return 0;
}
