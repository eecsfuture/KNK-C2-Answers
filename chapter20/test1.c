#include <stdio.h>

int main(void)
{
  unsigned short i, j, k;
  i = 8;
  j = 9;
  printf("%d\n", i >> 1 + j >> 1);  //  eaqual to ((i >> (1 + j)) >> 1)
  //printf("%d\n", (i >> 1) + (j >> 1));
  
  i = 1;
  printf("%d\n", i & ~i);
  
  i = 2;
  j = 1;
  k = 0;
  printf("%d\n", ~i & j ^ k);
  
  i = 7;
  j = 8;
  k = 9;
  printf("%d\n", i ^ j & k);  //  eaqual to (i ^ (j & k))
  
  return 0;
}