#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define QUEUE_SIZE 5

static int contents[QUEUE_SIZE];
static int first = 0;  // 存储数组中的第一个空位置（插入数据项时用到）
static int delete = 0;  // 存储待删除的下一项位置
static int number = 0;  // 存储队列中数据项的个数

static void terminate(const char *message) {
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

bool is_empty(void) {
  //return first == delete;
  return number == 0;
}

bool is_full(void) {
  return number == QUEUE_SIZE;
}

void push(int i) {
  if (is_full())
    terminate("Error in push: queue is full.");
  if (first == QUEUE_SIZE - 1) {
    contents[first] = i;
    first = 0;
  } else {
    contents[first++] = i;
  }
  //printf("The first is %d\n", first);
  number++;
}

int pop(void) {
  if (is_empty())
    terminate("Error in pop: queue is empty.");
  number--;
  if (delete == QUEUE_SIZE - 1) {
    delete = 0;
    return contents[delete];
  } else {
    //printf("The delete is %d\n", delete);
    return contents[delete++];
  }
}

int check_first(void) {
  return contents[delete];
}

int check_last(void) {
  if (first == 0)
    return contents[QUEUE_SIZE - 1];
  else
    return contents[first - 1];
}

