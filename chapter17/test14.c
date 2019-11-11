#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node {
  int value;
  struct node *next;
};

void delete_from_list(struct node **list, int n);

int main(void)
{
  
  return 0;
}

void delete_from_list(struct node **list, int n) {
  struct node *cur, *prev;
  for (cur = *list, prev = NULL;
       cur != NULL && cur->value != n;
       prev = cur, cur = cur->next)
    ;
  if (cur == NULL)
    ;
  else if (prev == NULL) {
    *list = (*list)->next;
    free(cur);
  } else {
    prev->next = cur->next;
    free(cur);
  }
}

