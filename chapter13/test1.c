#include <stdio.h>

int main(void)
{
  //printf("%c", '\n');
  //printf("%c", "\n");  // warning: format ‘%c’ expects argument of type ‘int’, but argument 2 has type ‘char *’
  //printf("%s", '\n');  // warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int’
  //printf("%s", "\n");
  //printf('\n');  // note: expected ‘const char * restrict’ but argument is of type ‘int’
  //printf("\n");
  //putchar('\n');
  //putchar("\n");  // note: expected ‘int’ but argument is of type ‘char *’
  //putchar("\n"[0]);
  //puts('\n');  // note: expected ‘const char *’ but argument is of type ‘int’
  //puts("\n");
  puts("");
  return 0;
}
