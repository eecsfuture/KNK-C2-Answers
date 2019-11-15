#include <stdio.h>

int main(void)
{
  const int i = 1;
  const int j;
  int m = 1;
  int n = 2;
  switch (m) {
    case n: break;  // error: case label does not reduce to an integer constant
    case i: break;  // error: case label does not reduce to an integer constant
    case 0: break;
  }
  return 0;
}
