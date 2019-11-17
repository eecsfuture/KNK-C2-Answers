#ifndef STACK_H
#define STACK_H

#include <stdbool.h>   /* C99 only */

struct node {
  int data;
  struct node *next;
};

// Stack是struct node *型的指针
// Stack *s中的s是struct node **型的指针，s存储了链表的首节点的地址，参考17.6节“指向指针的指针”
// *s就表示链表节点的地址
typedef struct node *Stack;

void make_empty(Stack *s);
bool is_empty(const Stack *s);
bool is_full(const Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);

#endif
