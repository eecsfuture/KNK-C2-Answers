#include <stdio.h>

enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};

int main(void)
{
  int piece_value1[] = {200, 9, 5, 3, 3, 1};
  int piece_value2[] = {
    [KING] = 200,
    [QUEEN] = 9,
    [ROOK] = 5,
    [BISHOP] = 3,
    [KNIGHT] = 3,
    [PAWN] = 1,
  };
  return 0;
}
