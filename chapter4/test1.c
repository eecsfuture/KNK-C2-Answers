#include <stdio.h>

int main(void)
{
  int i = 1;
  int j = 2;
  int k = 3;
  printf("%d, %d\n", i/j, i%j);
  printf("%d\n", (i + 10)/j);
  printf("%d\n", (i + 5) % (j + 2) / k);

  return 0;
}
