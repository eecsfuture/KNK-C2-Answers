#include <stdio.h>
#include "stack.h"

int main(void)
{
  Stack s1 = NULL;
  Stack s2 = NULL;
  make_empty(&s1);
  make_empty(&s2);
  push(&s1, 1);
  push(&s1, 2);
  push(&s2, 3);
  while (!is_empty(&s1))
    printf("%d\n", pop(&s1));
  if (!is_empty(&s2))
    printf("%d\n", pop(&s2));
  return 0;
}
