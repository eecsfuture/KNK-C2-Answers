#include <stdio.h>

int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.21f;

  printf("%6d,%4d\n", 86, 1040);
  printf("|%12.5e|\n", 30.253);
  printf("|%.4f|\n", 83.162);
  printf("|%-6.2g|\n", .0000009979);

  return 0;
}

