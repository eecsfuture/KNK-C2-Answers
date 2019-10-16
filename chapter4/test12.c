#include <stdio.h>

int main(void)
{
  int i = 5;
  int j;
  j = ++i * 3 - 2;
  printf("%d, %d\n\n", i, j);

  i = 5;
  j = 3 - 2 * i++;
  printf("%d, %d\n\n", i, j);

  i = 7;
  j = 3 * i-- + 2;
  printf("%d, %d\n\n", i, j);

  i = 7;
  j = 3 + --i * 2;
  printf("%d, %d\n\n", i, j);


  return 0;
}
