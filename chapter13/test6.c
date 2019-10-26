#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);
void censor(char str[], int n);

#define MSG_LEN 60

int main(void)
{
  char s[MSG_LEN+1];
  int n;

  n = read_line(s, MSG_LEN);

  printf("%s", s);
  printf("\n");

  censor(s, n);

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

void censor(char str[], int n) {
  int i = 0;
  while (str[i]) {
    if (str[i] == 'f' && str[i+1] == 'o' && str[i+2] == 'o')
      str[i] = str[i+1] = str[i+2] ='x';
    i++;
  }
}







