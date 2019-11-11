#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 10

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} part1 = {123, "Disk Drive", 250};

void print_part(struct part *p) {
  printf("Part number: %d\n", p->number);
  printf("Part name: %s\n", p->name);
  printf("Quantity on hand: %d\n", p->on_hand);
}

int main(void)
{
  print_part(&part1);
  return 0;
}

