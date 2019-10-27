#include <stdio.h>
#include <string.h>

#define CHECK(x,y,n) ((x) >= 0 && (x) <= (n)-1 && (y) >= 0 && (y) <= (n)-1)

#define MEDIAN(x,y,z) (x>y?(y>z?y:(x>z?z:x)):(x>z?x:(y>z?z:y)))  // 需要把每个变量都用小括号括起来

#define POLYNOMIAL(x) x*(x*(x*(3*x+5)*(x-1)-1)+7)-6  // 需要把每个变量都用小括号括起来

int main(void)
{
  int x = 16, y = 14, z = 15;
  printf("%d\n", CHECK(x,y,z));
  printf("%d\n", MEDIAN(x,y,z));
  printf("%d\n", POLYNOMIAL(x));
  return 0;
}
