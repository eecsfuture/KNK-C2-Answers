#include <stdio.h>
#include "queue.h"

int main(void) {
  int i, j;
  Queue q1, q2;
  make_empty(&q1);
  make_empty(&q2);

  push(&q1, 1);
  printf(" The first element is %d\n", check_first(&q1));
  printf(" The last element is %d\n", check_last(&q1));
  push(&q1, 2);
  printf(" The first element is %d\n", check_first(&q1));
  printf(" The last element is %d\n", check_last(&q1));
  push(&q1, 3);
  printf(" The first element is %d\n", check_first(&q1));
  printf(" The last element is %d\n", check_last(&q1));
  push(&q1, 4);
  printf(" The first element is %d\n", check_first(&q1));
  printf(" The last element is %d\n", check_last(&q1));
  push(&q1, 5);
  printf(" The first element is %d\n", check_first(&q1));
  printf(" The last element is %d\n", check_last(&q1));
  //push(3);
  i = pop(&q1);
  printf(" i is %d\n", i);
  j = pop(&q1);
  printf(" j is %d\n", j);

  printf("\n\n\n");
  
  push(&q2, 1);
  printf(" The first element is %d\n", check_first(&q2));
  printf(" The last element is %d\n", check_last(&q2));
  push(&q2, 2);
  printf(" The first element is %d\n", check_first(&q2));
  printf(" The last element is %d\n", check_last(&q2));
  push(&q2, 3);
  printf(" The first element is %d\n", check_first(&q2));
  printf(" The last element is %d\n", check_last(&q2));
  push(&q2, 4);
  printf(" The first element is %d\n", check_first(&q2));
  printf(" The last element is %d\n", check_last(&q2));
  push(&q2, 5);
  printf(" The first element is %d\n", check_first(&q2));
  printf(" The last element is %d\n", check_last(&q2));
  //push(3);
  i = pop(&q2);
  printf(" i is %d\n", i);
  j = pop(&q2);
  printf(" j is %d\n", j);

  return 0;
}
