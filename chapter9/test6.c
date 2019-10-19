#include <stdio.h>

int num_digit(int n, int k);

int main(void)
{
  int num, k;

  printf("Enter a positive int number and k: ");
  scanf("%d%d", &num, &k);
  
  printf("选择的数字是: %d\n", num_digit(num, k));

  return 0;
}

int num_digit(int n, int k)
{
  int num;  // 输入的数字
  int digit;  // 返回的数字
  int i = 0;  // 表示总的位数

  num = n;
  while (num != 0) {
    num /= 10;
    i++;
  }
  
  printf("总的位数是: %d\n", i);

  if (k > i) {
    return 0;
  } else {
    while (k > 0) {
      digit = n % 10;
      n /= 10;
      k--;
    }
    return digit;
  }
}

// 参考答案

int digit(int n, int k)
{
  int i;

  for (i = 1; i < k; i++)
    n /= 10;

  return n % 10;
}


