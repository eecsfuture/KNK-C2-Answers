#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node {
  int value;
  struct node *next;
};

struct node *top = NULL;

int main(void)
{
  return 0;
}

void make_empty(void) {
  struct node *temp;
  while (top != NULL) {
    temp = top;
    top = top->next;
    free(temp);
  }
}

bool is_empty(void) {
  return top == NULL;
}

bool push(int i) {
  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: malloc failed in push!\n");
    return false;
  }
  new_node->value = i;
  new_node->next = top;
  top = new_node;
  return true;
}

int pop(void) {
  struct node *temp;
  int i;
  if (is_empty()) {
    exit(EXIT_FAILURE);
  }
  temp = top;
  i = top->value;
  top = top->next;
  free(temp);
  return i;
}



