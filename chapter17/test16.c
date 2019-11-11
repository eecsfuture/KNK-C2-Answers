#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int g(int i);
int sum(int (*f)(int), int start, int end);

int main(void)
{
  printf("The Result is: %d\n", sum(g, 1, 100));
  return 0;
}

int g(int i) {
 return i; 
}

int sum(int (*f)(int), int start, int end) {
  int result = 0;
  for (int i = start; i <= end; i++) {
    result += (*f)(i);
  }
  return result;
}

