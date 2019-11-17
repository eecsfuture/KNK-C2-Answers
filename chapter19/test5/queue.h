#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define QUEUE_SIZE 5

typedef struct {
  int contents[QUEUE_SIZE];
  int first;  // 存储数组中的第一个空位置（插入数据项时用到）
  int delete;  // 存储待删除的下一项位置
  int number;  // 存储队列中数据项的个数
} Queue;

void make_empty(Queue *q);
void push(Queue *q, int i);
int pop(Queue *q);
int check_first(const Queue *q);
int check_last(const Queue *q);
bool is_empty(const Queue *q);
bool is_full(const Queue *q);

#endif
