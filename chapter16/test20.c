#include <stdio.h>

enum { NORTH, SOUTH, EAST, WEST } direction;

int main(void)
{
  int x = 0, y = 0;
  direction = NORTH;
  switch (direction) {
    case EAST: 
      x++; break;
    case WEST:
      x--; break;
    case SOUTH:
      y++; break;
    case NORTH:
      y--; break;
    default: break;
  }
  return 0;
}
