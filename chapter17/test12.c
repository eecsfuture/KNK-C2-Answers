#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int value;
  struct node *next;
};

struct node *find_last(struct node *list, int n) {
  struct node *cur = NULL;
  while (list != NULL) {
    if (list->value == n) {
      cur = list;
    }
    list = list->next;
  }
  return cur;
}

int main(void)
{
  return 0;
}

