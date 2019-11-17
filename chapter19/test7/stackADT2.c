#include <stdio.h>
#include <stdlib.h>
#include "stackADT2.h"

struct stack_type {
  Item *contents;
  int top;
  int size;
};

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(int size)
{
  Stack s = malloc(sizeof(struct stack_type));
  if (s == NULL)
    terminate("Error in create: stack could not be created.");
  s->contents = malloc(size * sizeof(Item));
  if (s->contents == NULL) {
    free(s);
    terminate("Error in create: stack could not be created.");
  }
  s->top = 0;
  s->size = size;
  return s;
}

void destroy(Stack s)
{
  free(s->contents);
  free(s);
}

void make_empty(Stack s)
{
  s->top = 0;
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

bool is_full(Stack s)
{
  return s->top == s->size;
}

void push(Stack s, Item i)
{
  if (is_full(s)) {
    Stack old_s = malloc(sizeof(struct stack_type));
    if (old_s == NULL)
      terminate("Error in create: old stack could not be created.");
    old_s->contents = s->contents;
    old_s->top = s->top;
    old_s->size = s->size;
    
    s->size *= 2;
    s->contents = malloc(s->size * sizeof(Item));
    if (s->contents == NULL) {
      free(s);
      terminate("Error in create: stack could not be created.");
    }
    for (int i = 0; i < old_s->size; i++) {
      s->contents[i] = old_s->contents[i];
    }
    free(old_s->contents);
    free(old_s);
    printf("The new size of stack is %d\n", s->size);
  }
  s->contents[s->top++] = i;
}

Item pop(Stack s)
{
  if (is_empty(s))
    terminate("Error in pop: stack is empty.");
  return s->contents[--s->top];
}

Item peek(Stack s) {
  if (is_empty(s))
    terminate("Error in pop: stack is empty.");
  return s->contents[s->top - 1];
}
