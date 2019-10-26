#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[20];
  strcpy(str, "tire-bouchon");
  printf("%s\n", str);
  strcpy(&str[4], "d-or-wi");
  printf("%s\n", str);
  strcat(str, "red?");
  printf("%s\n", str);

  return 0;
}
