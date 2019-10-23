#include <stdio.h>

#define N 100

int main(void)
{
  int i;
  char a[N], ch;
  
  i = 0;
  printf("Enter a message: ");
  ch = getchar();
  while (ch != '\n' && i < N) {
    a[i] = ch;
    ch = getchar();
    i++;
  }

  printf("Reversal is: ");
  for (i--; i >= 0; i--)
    printf("%c", a[i]);
  
  printf("\n");

  return 0;
}
