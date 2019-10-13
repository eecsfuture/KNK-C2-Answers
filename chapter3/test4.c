#include <stdio.h>

int main(void)
{
  int i;
  float x;
  int j;

//  i = 40;
//  x = 839.21f;

  scanf("%d%f%d", &i, &x, &j);

//  printf("|%-8.1e|\n", x);
//  printf("|%10.6e|\n", x);
//  printf("|%-8.3f|\n", x);
//  printf("|%6.0f|\n", x);
  printf("%d,%.3f,%d\n", i, x, j);

  return 0;
}

