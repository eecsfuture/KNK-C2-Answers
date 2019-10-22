#include <stdio.h>

#define N 10

void *find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
  int b[N], i, largest, second_largest;
  
  printf("Enter %d number: ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &b[i]);
  }

  find_two_largest(b, N, &largest, &second_largest);
  printf("largest is %d\n", largest);
  printf("second_largest is %d\n", second_largest);

  return 0;
}

void *find_two_largest(int a[], int n, int *largest, int *second_largest) {
  int pass, num, temp;
  for (pass = 1; pass < n; pass++) {  // 冒泡法排序
    for (num = 0; num < n - pass; num++) {
      temp = a[num];
      if (a[num+1] < temp) {
        a[num] = a[num+1];
        a[num+1] = temp;
      }
    }
  }
  
  *largest = a[n-1];
  *second_largest = a[n-2];
}
