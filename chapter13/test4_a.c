#include <stdio.h>

int read_line(char str[], int n);

#define MSG_LEN 60

int main(void)
{
  char s[MSG_LEN+1];

  read_line(s, MSG_LEN);

  printf("%s", s);
  printf("\n");
  return 0;
}

// 在开始存入前跳过空白字符
int read_line(char str[], int n) {
  int ch, i = 0;
  
  while ((ch = getchar()) == ' ')
    ;
  while (ch != '\n') {
    if (i < n)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i;
}
