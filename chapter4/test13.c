#include <stdio.h>

int main(void)
{
  int i = 5;
  int j;
  printf("%d\n", ++i);
  printf("%d\n", i);


  i = 5;
  printf("%d\n", i++);
  printf("%d\n", i);


  i = 5;
  j = ++i + 1;
  printf("%d, %d\n", i, j);


  i = 5;
  j = i++ + 1;
  printf("%d, %d\n", i, j);


  i = 5;
  j = (i += 1) + 1;
  printf("%d, %d\n", i, j);

  return 0;
}
