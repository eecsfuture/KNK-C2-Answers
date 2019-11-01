#include <stdio.h>

int main(void)
{
  struct color {
    int red;
    int green;
    int blue;
  };
  const struct color MAGENTA = {255, 0, 255};
  printf("red = %d, green = %d, blue = %d\n", MAGENTA.red, MAGENTA.green, MAGENTA.blue);
  
  const struct color MAGENTA2 = {.blue = 255, .red = 255};
  printf("red = %d, green = %d, blue = %d\n", MAGENTA2.red, MAGENTA2.green, MAGENTA2.blue);
  return 0;
}
