#include <stdio.h>

int main(void)
{
  int i = 1;
  printf("%d ", i++ - 1);
  printf("%d\n\n",i);

  i = 10;
  int j = 5;
  printf("%d\n", i++ - ++j);
  printf("%d, %d\n\n", i, j);

  i = 7;
  j = 8;
  printf("%d\n", i++ - --j);
  printf("%d, %d\n\n", i, j);

  i = 3;
  j = 4;
  int k = 5;
  printf("%d\n", i++ - j++ + --k);
  printf("%d, %d, %d\n\n", i, j, k);

  return 0;
}
