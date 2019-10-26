#include <stdio.h>
#include <string.h>

int my_strcmp(char *s, char *t);

int main(void)
{
  char s1[20], s2[20];
  strcpy(s1, "computer");
  strcpy(s2, "science");
  if (my_strcmp(s1, s2) < 0)
    strcat(s1, s2);
  else
    strcat(s2, s1);
  s1[strlen(s1)-6] = '\0';
  printf("%s\n", s1);
  printf("%s\n", s2);

  return 0;
}


int my_strcmp(char *s, char *t) {
  for (; *s == *t; s++, t++)
    if (*s == '\0')
      return 0;
  return *s - *t;
}
