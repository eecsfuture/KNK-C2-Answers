#include <stdio.h>

// f是一个函数，它有2个参数，一个参数是函数指针，这个函数的实际参数是long型的，返回值是float型的；另一个参数是指向char型变量的指针。f的返回值是一个指向函数的指针，指向的函数具有double型的实际参数和int型的返回值
int (*f(float (*)(long), char *))(double);

float f1(long l);
char *c;
double d;
int r;
int (*f2)(double);

int main(void)
{
  f2 = f(f1, c);
  return 0;
}

int (*f(float (*f1)(long l), char *c))(double d) {

}

float f1(long l) {

}
