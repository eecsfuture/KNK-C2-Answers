#include <stdio.h>

int main(void)
{
  unsigned int n = 11113;
  for (int i = 0; i < 10; i++) {
    printf("n is %x, time is %d\n", n, i + 1);
    n &= n - 1;
  }
  //n = 0;
  //printf("unsigned int 0 - 1 is %d\n", n);
 
  return 0;
}
