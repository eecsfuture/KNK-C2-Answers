#include <stdio.h>

struct t {
  ;
};

void insert(void){;};
void search(void){;};
void update(void){;};
void print(void){;};

int main(void)
{
  char *(*p)(char *);
  void (*f(struct t *p, long int n))(void);
  void (*a[4])(void) = {insert, search, update, print};
  struct t (*b[10])(int, int);
  return 0;
}
