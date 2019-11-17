#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty(Queue *q) {
  q->first = 0;
  q->delete = 0;
  q->number = 0;
}

bool is_empty(const Queue *q) {
  return q->number == 0;
}

bool is_full(const Queue *q) {
  return q->number == QUEUE_SIZE;
}

void push(Queue *q, int i) {
  if (is_full(q))
    terminate("Error in push: queue is full.");
  if (q->first == QUEUE_SIZE - 1) {
    q->contents[q->first] = i;
    q->first = 0;
  } else {
    q->contents[q->first++] = i;
  }
  //printf("The first is %d\n", first);
  q->number++;
}

int pop(Queue *q) {
  if (is_empty(q))
    terminate("Error in pop: queue is empty.");
  q->number--;
  if (q->delete == QUEUE_SIZE - 1) {
    q->delete = 0;
    return q->contents[q->delete];
  } else {
    //printf("The delete is %d\n", delete);
    return q->contents[q->delete++];
  }
}

int check_first(const Queue *q) {
  return q->contents[q->delete];
}

int check_last(const Queue *q) {
  if (q->first == 0)
    return q->contents[QUEUE_SIZE - 1];
  else
    return q->contents[q->first - 1];
}

