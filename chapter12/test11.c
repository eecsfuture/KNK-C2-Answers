#include <stdio.h>

int a[5] = {1, 2, 3, 4, 6}, *p;

int fidn_largest(int a[], int n);

int main(void)
{
  printf("%d\n", fidn_largest(a, 5));
  printf("%d\n", fidn_largest(a, 3));
  return 0;
}

int fidn_largest(int a[], int n) {
  int *p, max;
  
  max = *a;
  for (p = a; p < a + n; p++) {
    if (*p > max)
      max = *p;
  }
  return max;
}
