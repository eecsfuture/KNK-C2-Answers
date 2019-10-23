#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

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

void find_two_largest(int a[], int n, int *largest,
                      int *second_largest)
{
  int *p;

  if (*(a+0) > *(a+1)) {
    *largest = *(a+0);
    *second_largest = *(a+1);
  } else {
    *largest = *(a+1);
    *second_largest = *(a+0);
  }

  for (p = a+1; p < a+n; p++)
    if (*p > *largest) {
      *second_largest = *largest;
      *largest = *p;
    } else if (*p > *second_largest)
      *second_largest = *p;
}
