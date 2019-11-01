#include <stdio.h>

enum Piece {A, B, C, D, E, F, G, NONE};
enum Color {White, Black};

struct Square {
  enum Piece p;
  enum Color c;
};


int main(void)
{
  struct Square board[8][8] =
    { {A, White},  {B, Black}, {NONE, Black} };
  return 0;
}
