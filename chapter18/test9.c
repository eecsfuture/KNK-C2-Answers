#include <stdio.h>

// char (*x[10]) (int);
typedef char (*Fcn1)(int);
typedef Fcn1 Fcn1_array[10];
Fcn1_array x1;

// int (*x(int))[5];
typedef int Array[5];
typedef Array *Array_Fcn2(int);
Array_Fcn2 x2;

// float *(*x(void))(int);
typedef float *Fcn3(int);
typedef Fcn3 *Fcn3_fcn4(void);
Fcn3_fcn4 x3;

// void (*x(int, void (*y)(int)))(int);
typedef void (*Fcn5_ptr)(int);
typedef void (*y)(int);
typedef Fcn5_ptr Fcn5_ptr_fcn6(int, y);
Fcn5_ptr_fcn6 x4;

int main(void)
{
  return 0;
}
