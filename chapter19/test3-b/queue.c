#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node {
  int data;
  struct node *next;
};

static struct node *first = NULL;
static struct node *last = NULL;

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

bool is_empty(void) {
  return first == NULL;
}

bool is_full(void) {
  return false;
}

void push(int i) {
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL)
    terminate("Error in push: queue is full.");
  new_node->data = i;
  new_node->next = last;
  last = new_node;
  if (new_node->next == NULL)
    first = new_node;
}

int pop(void) {
  struct node *old_last;
  int i;
  
  if (is_empty())
    terminate("Error in pop: queue is empty.");
  
  old_last = last;
  i = last->data;
  last = last->next;
  free(old_last);
  return i;
}

int check_first(void) {
  if (is_empty())
    terminate("Error in pop: queue is empty.");
  return first->data;
}

int check_last(void) {
  if (is_empty())
    terminate("Error in pop: queue is empty.");
  return last->data;
}

