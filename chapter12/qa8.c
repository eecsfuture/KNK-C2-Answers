#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLS 5

int main(void)
{
  int a[NUM_ROWS][NUM_ROWS];
  printf("%p\n", a);
  printf("%p\n", &a);
  printf("%p\n", a[0]);
  printf("%p\n", &a[0]);
  printf("%p\n", &a[0][0]);
  
  printf("%d\n", (int) sizeof(a));
  printf("%d\n", (int) sizeof(a[0]));
  printf("%d\n", (int) sizeof(a[0][0]));
  
  int b[5];
  printf("%p\n", &b);
  printf("%p\n", b);
  printf("%p\n", &b[0]);
  
  printf("%d\n", (int) sizeof(&b));
  printf("%d\n", (int) sizeof(b));
  printf("%d\n", (int) sizeof(b[0]));
  

  return 0;
}
