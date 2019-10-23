#include <stdio.h>

#define N 100

int main(void)
{
  char *p, a[N], ch;
  
  p = a;
  printf("Enter a message: ");
  ch = getchar();
  while (ch != '\n' && p < &a[N]) {
    *p = ch;
    ch = getchar();
    p++;
  }

  printf("Reversal is: ");
  for (p--; p >= a; p--)
    printf("%c", *p);
  
  printf("\n");

  return 0;
}
