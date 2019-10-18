#include <stdio.h>

#define N 40

int main(void)
{
  int fib_number[N];
  fib_number[0] = 0;
  fib_number[1] = 1;
  int i = 2;
  while(i<N) {
    fib_number[i] = fib_number[i-1] + fib_number[i-2];
    i++;
  }

  i =0;
  while(i<N) {
    printf("%d ", fib_number[i++]);
  }
  printf("\n");

  return 0;
}
