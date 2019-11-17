#include <stdio.h>

unsigned int f(unsigned int i, int m, int n);

int main(void)
{
  unsigned int i = 0x12345678;
  printf("i is: %x, result is: %x\n", i, f(i, 11, 8));

  return 0;
}

unsigned int f(unsigned int i, int m, int n) {
  return (i >> (m + 1 -n)) & ~(~0 << n);
}
