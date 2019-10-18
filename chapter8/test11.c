#include <stdio.h>

int main(void)
{
  char checker[8][8];
  int row, col;
  for (row = 0; row < 8; row++ ) {
    for (col = 0; col < 8; col++ ) {
      if ((row + col) % 2 == 0) {
        checker[row][col] = 'B';
      } else {
        checker[row][col] = 'R';
      }
    }
  }

  for (row = 0; row < 8; row++ ) {
    for (col = 0; col < 8; col++ ) {
      printf("%c ", checker[row][col]);
      if (col == 7) {
        printf("\n");
      }
    }
  }

  printf("\n");

  return 0;
}
