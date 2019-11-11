#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int value;
  struct node *next;
};

int count_occurrences(struct node *list, int n) {
  int i = 0;
  while (list != NULL) {
    if (list->value == n)
      i++;
    list = list->next;
  }
  return i;
}

int main(void)
{
  return 0;
}

