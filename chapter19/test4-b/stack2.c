#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty(Stack *s) {
  while (!is_empty(s))
    pop(s);
}

bool is_empty(const Stack *s) {
  return *s == NULL;
}

bool is_full(const Stack *s) {
  return false;
}

void push(Stack *s, int i) {
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL)
    terminate("Error in push: stack is full.");

  new_node->data = i;
  new_node->next = *s;
  *s = new_node;
}

int pop(Stack *s) {
  struct node *old_top;
  int i;

  if (is_empty(s))
    terminate("Error in pop: stack is empty.");

  old_top = *s;
  i = (*s)->data;
  *s = (*s)->next;
  free(old_top);
  return i;
}
