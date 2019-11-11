#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
struct node {
  int value;
  struct node *next;
};

struct node *delete_from_list(struct node *list, int n);

int main(void)
{
  
  return 0;
}

struct node *delete_from_list(struct node *list, int n) {
  struct node *cur, *prev;
  for (cur = list, prev = NULL;
       cur != NULL && cur->value != n;
       prev = cur, cur = cur->next)
    ;
  if (cur == NULL)
    return list;
  if (prev == NULL)
    list = list->next;
  else
    prev->next = cur->next;
  free(cur);
  return list;
}
*/

struct node {
  int value;
  struct node *next;
};

struct node *delete_from_list(struct node *list, int n);

int main(void)
{
  
  return 0;
}

struct node *delete_from_list(struct node *list, int n) {
  struct node *cur;
  int position = 0, i;
  for (cur = list;
       cur != NULL && cur->value != n;
       cur = cur->next)
    position++;  // 记录次数
  if (cur == NULL)
    return list;
  if (cur == list) {
    list = list->next;
    free(cur);
  } else {
    for (i = 0, cur = list; i < position - 1; cur = cur->next)
      i++;
    struct node *delete;
    delete = cur->next;
    cur->next = cur->next->next;
    free(delete);
  }
  
  return list;
}
