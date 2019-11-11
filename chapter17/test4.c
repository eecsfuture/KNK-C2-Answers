#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  struct point { int x, y; };
  struct rectangle { struct point upper_left, lower_right; };
  struct rectangle *p;
  p = malloc(sizeof(struct rectangle));
  (*p).upper_left.x = 10;
  (*p).upper_left.y = 25;
  (*p).lower_right.x = 20;
  (*p).lower_right.y = 15;
  return 0;
}


