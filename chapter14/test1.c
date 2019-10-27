#include <stdio.h>

#define THREE(x) ((x)*(x)*(x))
#define N(n) ((n)%4)
#define Multi(x, y) ((x)*(y) < 100 ? 1 : 0)


int main(void)
{
  printf("%d\n", THREE(10));
  printf("%d\n", N(-121));
  printf("%d\n", Multi(10,10) );
  return 0;
}
