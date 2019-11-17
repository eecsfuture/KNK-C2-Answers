#include <stdio.h>

unsigned short wrong_create_short(unsigned char high_byte, unsigned char low_byte);
unsigned short create_short(unsigned char high_byte, unsigned char low_byte);

int main(void)
{
  unsigned char h = 0x34, l = 0x12;
  printf("high_byte %hhx and low_byte %hhx create_short: %hx\n", h, l, create_short(h, l));
  printf("wrong_create_short: %hx\n", wrong_create_short(h, l));
  // printf("%d\n", (int) sizeof(create_short(h, l)));
 
  return 0;
}

unsigned short wrong_create_short(unsigned char high_byte, unsigned char low_byte) {
  return high_byte << 8 + low_byte;
}

unsigned short create_short(unsigned char high_byte, unsigned char low_byte) {
  return high_byte << 8 + low_byte;
}
