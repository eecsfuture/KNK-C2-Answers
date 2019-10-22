#include <stdio.h>

void f(const int *p);
void g(int *p);

int main(void)
{
  int i;
  f(&i);
  const int m;
  g(&m);
  return 0;
}

void f(const int *p) {
  int j;
  
  // *p = 0;  // error: assignment of read-only location ‘*p’
  p = &j;
  // *p = 0;  // 把这句放在这里也会报上面的错误，无论在哪里，都不能对*p进行修改
  // 不能修改指针p指向的整数，但是可以修改p自身
}

void g(int *p) {  // note: expected ‘int *’ but argument is of type ‘const int *’
  *p = 0;  // warning: passing argument 1 of ‘g’ discards ‘const’ qualifier from pointer target type
}
