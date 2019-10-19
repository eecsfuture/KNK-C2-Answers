#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
  int m, n;

  printf("Enter two integers: ");
  scanf("%d%d", &m, &n);

  printf("Greatest common divisor: %d\n", gcd(m, n));

  return 0;
}

int gcd(int m, int n) {
  int remainder;
  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }
  return m;
}
