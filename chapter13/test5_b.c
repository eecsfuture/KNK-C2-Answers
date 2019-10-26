#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);
void capitalize(char str[], int n);

#define MSG_LEN 60

int main(void)
{
  char s[MSG_LEN+1];
  int n;

  n = read_line(s, MSG_LEN);

  printf("%s", s);
  printf("\n");

  capitalize(s, n);

  printf("%s", s);
  printf("\n");

  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n)
      str[i++] = ch;
  }
  str[i] = '\0';

  return i;
}

void capitalize(char str[], int n) {
  while (*str) {
    if (isalpha(*str))
      *str = toupper(*str);
    str++;
  }
}







