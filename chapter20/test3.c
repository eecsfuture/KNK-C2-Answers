#include <stdio.h>
#define M(x, y) ((x)^=(y),(y)^=(x),(x)^=(y))
int main(void)
{
  unsigned short i, j, k;
  i = 9;
  j = 14;
  k = M(i, j);
  printf("M(i, j) = %d\n", k);
  printf("i = %d, j = %d\n", i, j);

  return 0;
}
