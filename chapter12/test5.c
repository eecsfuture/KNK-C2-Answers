#include <stdio.h>

int a[5] = {0}, *p;

int main(void)
{
  p = a;
  // printf("%d\n", p == a[0]);  // warning: comparison between pointer and integer
  printf("%d\n", p == &a[0]);
  printf("%d\n", *p == a[0]);
  printf("%d\n", p[0] == a[0]);
  

  return 0;
}
