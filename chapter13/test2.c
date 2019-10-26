#include <stdio.h>

int main(void)
{
  char *p = "abc";
  //putchar(p);  // note: expected ‘int’ but argument is of type ‘char *’
  //putchar(*p);
  //puts(p);
  puts(*p);  // note: expected ‘const char *’ but argument is of type ‘char’
  return 0;
}
