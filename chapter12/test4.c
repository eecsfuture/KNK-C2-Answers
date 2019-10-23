#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = &contents[0];

int main(void)
{
  return 0;
}

void make_empty(void) {
  top_ptr = &contents[0];
}

bool is_empty(void) {
  return top_ptr == &contents[0];
}

bool is_full(void) {
  return top_ptr == &contents[STACK_SIZE];  // 注意：不是top_ptr == &contents[STACK_SIZE-1];  top_ptr指向的地址无意义，在栈顶元素的上面
}

void push(int i) {
  if (is_full())
    stack_overflow();
  else
    *top_ptr++ = i;
}

int pop(void) {
  if (is_empty())
    stack_underflow();
  else
    return *--top_ptr;
}
