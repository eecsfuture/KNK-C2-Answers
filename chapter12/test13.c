#include <stdio.h>

#define N 10

int main(void)
{
  int ident[N][N], *p, n, i, j;

  n = N;
  for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++) {
    if (n == N) {
      n = 0;
      *p = 1;
    } else {
      *p = 0;
      n++;
    }
    
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++)
      printf("%d ", ident[i][j]);
    if (j == N)
      printf("\n");
  }

  return 0;
}
