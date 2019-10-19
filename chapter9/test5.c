#include <stdio.h>

int num_digit(int n);

int main(void)
{
  int num;

  printf("Enter a positive int number: ");
  scanf("%d", &num);
  
  printf("Greatest common divisor: %d\n", num_digit(num));

  return 0;
}

int num_digit(int n)
{
  int i = 0;
  while (n != 0) {
    n /= 10;
    i++;
  }

  return i;
}
