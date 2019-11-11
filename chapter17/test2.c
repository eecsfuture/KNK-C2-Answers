#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *s);

int main(void)
{
  char *str = "It's a test string.";
  printf("%s\n", str);
  char *p = duplicate(str);
  if (p != NULL)
    printf("%s\n", p);
  return 0;
}

char *duplicate(char *s) {
  char *result = malloc(strlen(s) + 1);
  
  if (result == NULL) {
    printf("Error: malloc failed in duplicate!\n");
  } else {
    strcpy(result, s);
  }
  return result;
}

//官网答案
/*
char *duplicate(const char *s)
{
  char *temp = malloc(strlen(s) + 1);

  if (temp == NULL)
    return NULL;

  strcpy(temp, s);
  return temp;
}
*/
