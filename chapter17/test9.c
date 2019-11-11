#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int value;
  struct node *next;
};

int main(void)
{
  struct node a;
  struct node *p = &a;
  a.value = 15;
  a.next = NULL;
  printf("%d\n", a.value);
  printf("%d\n", (&a)->value);
  printf("%d\n", p->value);
  return 0;
}

