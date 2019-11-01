#include <stdio.h>

#define MAX_LEN 40

struct pinball_machine {
  char name[MAX_LEN+1];
  int year;
  enum { EM, SS } type;
  int players;
};


int main(void)
{

  return 0;
}
