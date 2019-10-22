#include <stdio.h>

int main(void)
{
  int i = 0, j = 1, k = 2, *p, *q;
  // p = i;  // warning: assignment makes pointer from integer without a cast
  // p = (int *) i;  // warning: cast to pointer from integer of different size
  p = (int *) (long int) i;
  printf("%d, %d", (int) sizeof(i), (int) sizeof(p));  // 如果不对sizeof进行类型转换，会报错：warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’
  return 0;
}
