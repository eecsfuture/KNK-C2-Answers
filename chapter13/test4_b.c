#include <stdio.h>
#include <ctype.h>

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

// 在遇到第一个空白字符时停止读入
int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n' && !isspace(ch)) {
    if (i < n)
      str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}

// 官网答案
// 换行符'\n'也是空白字符
/*
int read_line(char str[], int n)
{
  int ch, i = 0;

  while (!isspace(ch = getchar()))
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
*/
