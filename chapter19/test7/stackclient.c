#include <stdio.h>
#include "stackADT2.h"

int main(void)
{
  Stack s1;
  int n;

  s1 = create(2);

  push(s1, 1);
  push(s1, 2);
  push(s1, 3);  // display: The new size of stack is 4
  push(s1, 4);
  push(s1, 5);  // display: The new size of stack is 8

  while (!is_empty(s1)) {
    printf("Popped %d from s1\n", pop(s1));
  }

  destroy(s1);

  return 0;
}
