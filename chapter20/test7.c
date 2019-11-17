#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void)
{
  unsigned int i = 0x12345678;
  int j = 4;
  printf("%d\n", (int) sizeof(i));
  printf("%x rotate_left by %d is: %x\n", i, j, rotate_left(i, j));
  printf("%x rotate_right by %d is: %x\n", i, j, rotate_right(i, j));

  return 0;
}

unsigned int rotate_left(unsigned int i, int n) {
  return (i << n) | (i >> (32 - n));
}

unsigned int rotate_right(unsigned int i, int n) {
  return (i >> n) | (i << (32 - n));
}
