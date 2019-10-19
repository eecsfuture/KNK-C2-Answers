#include <stdio.h>

int f_max(int a[], int n);
int f_avg(int a[], int n);
int f_pos(int a[], int n);

#define N 5
int main(void)
{
  int i, a[N];

  printf("Enter %d numbers: ", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  
  printf("最大元素是: %d\n", f_max(a, N));
  printf("平均值是: %d\n", f_avg(a, N));
  printf("正数元素数量是: %d\n", f_pos(a, N));

  return 0;
}

int f_max(int a[], int n) {
  int max = a[0];
  for (int i = 0; i < n; i++) {
    if (max < a[i]) max = a[i];
  }
  return max;
}

int f_avg(int a[], int n) {
  int avg;
  for (int i = 0; i < n; i++) {
    avg += a[i];
  }
  return avg / n; 
}

int f_pos(int a[], int n) {
  int num = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) num++;
  }
  return num; 
}
