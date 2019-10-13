#include <stdio.h>

int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.21f;

  printf("|%-8.1e|\n", x);
  printf("|%10.6e|\n", x);
  printf("|%-8.3f|\n", x);
  printf("|%6.0f|\n", x);

  return 0;
}

