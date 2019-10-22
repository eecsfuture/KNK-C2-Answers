#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void)
{
  int b[N], i, *big;
  
  printf("Enter %d number: ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &b[i]);
  }

  big = find_largest(b, N);
  printf("%p\n", big);

  big = &b[9];  // 将数组最大值存储在b[9]中
  printf("%p\n", big);

  return 0;
}

int *find_largest(int a[], int n) {
  int *max, i;
  max = &a[0];
  for (i = 1; i < n; i++) {
    if (a[i] > *max)
      max = &a[i];
  }
  return max; 
}
