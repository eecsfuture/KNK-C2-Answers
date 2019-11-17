#include <stdio.h>

int count_ones(unsigned char ch);

int main(void)
{
  unsigned char i = 0x0F;
  printf("%d\n", (int) sizeof(i));
  printf("count_ones result is: %d\n", count_ones(i));

  return 0;
}

int count_ones(unsigned char ch) {
  int ones_num = 0;
  for (int i = 0; i < 8; i++) {
    if (ch & 1 << i)
      ones_num++;
  }
  return ones_num;
}
