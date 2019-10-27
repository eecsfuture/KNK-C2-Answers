#include <stdio.h>

#define NELENS(a) ((int) (sizeof(a) / sizeof(a[0])))


int main(void)
{
  char a[125];
  printf("%d\n", NELENS(a));
  return 0;
}
