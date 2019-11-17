#include <stdio.h>

int main(void)
{
  // int i = 0xFFFFFFFF;
  // printf("%d\n", i);
  struct {
    int flag: 1;
  } s;
  s.flag = 1;
  printf("%d\n", s.flag);

  struct {
    unsigned int flag: 1;
  } s1;
  s1.flag = 1;
  printf("%d\n", s1.flag);

  return 0;
}
