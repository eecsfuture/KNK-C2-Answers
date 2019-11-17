#include <stdio.h>

unsigned int reverse_bits(unsigned int n);

int main(void)
{
  unsigned int i = 0xF0F0F0F0;
  printf("%x reverse_bits is: %x\n", i, reverse_bits(i));

  return 0;
}

unsigned int reverse_bits(unsigned int n) {
  unsigned int reverse_n = n;
  for (int i = 0; i < 16; i++) {
    if (reverse_n & 1 << i) {
      if (!(reverse_n & 1 << (31- i))) {  // 如果低位是1，且对应的高位是0，则置位高位且清除低位；否则不动作
        reverse_n |= 1 << (31- i);
        reverse_n &= ~(1 << i);
      }
    } else {  // 如果低位是0，且对应的高位是1，则置位低位且清除高位；否则不动作
      if (reverse_n & 1 << (31- i)) {
        reverse_n &= ~(1 << (31- i));
        reverse_n |= 1 << i;
      }
    }
  }
  return reverse_n;
}
