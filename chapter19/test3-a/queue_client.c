#include <stdio.h>
#include "queue.h"

int main(void) {
  int i, j;
  push(1);
  printf(" The first element is %d\n", check_first());
  printf(" The last element is %d\n", check_last());
  push(2);
  printf(" The first element is %d\n", check_first());
  printf(" The last element is %d\n", check_last());
  push(3);
  printf(" The first element is %d\n", check_first());
  printf(" The last element is %d\n", check_last());
  push(4);
  printf(" The first element is %d\n", check_first());
  printf(" The last element is %d\n", check_last());
  push(5);
  printf(" The first element is %d\n", check_first());
  printf(" The last element is %d\n", check_last());
  //push(3);
  i = pop();
  printf(" i is %d\n", i);
  j = pop();
  printf(" j is %d\n", j);
}
