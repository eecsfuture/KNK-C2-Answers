#include <stdio.h>

int *f(int n);
typedef int (*Fcn_ptr)(int);

int main(void)
{
  // int f(int)[];
  int array[3];
  int *p = f(1);
  
  // int g(int)(int);
  Fcn_ptr g(int);
  
  // int a[10](int);
  Fcn_ptr a[10];
  
  return 0;
}

int *f(int n) {
  ;
}
