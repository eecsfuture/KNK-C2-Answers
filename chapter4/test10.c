#include <stdio.h>

int main(void)
{
  int i = 6;
  int j;
  j = i +=i;
  printf("%d, %d\n", i, j);
  
  i = 5;
  j = (i -=2) + 1;
  printf("%d, %d\n", i, j);
 
  i = 7;
  j = 6 + (i = 2.5);
  printf("%d, %d\n", i, j);
 
  i = 2;
  j = 8;
  j = (i = 6) + (j = 3);
  printf("%d, %d\n", i, j);

  return 0;
}
