#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);

#define MSG_LEN 50

int main(void)
{
  char s[MSG_LEN+1];

  read_line(s, MSG_LEN);

  printf("%s", s);  //  如果没有存储换行符，输入字符不会换行
  //printf("\n");

  return 0;
}

// 在遇到第一个换行符时停止读入，然后把换行符存储到字符串中
int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < (n-1))
      str[i++] = ch;
  }
  str[i] = ch;
  str[i+1] = '\0';
  return i;
}


// 官网答案
/*
int read_line(char str[], int n)
{
  int ch, i = 0;

  do {
    ch = getchar();
    if (i < n)
      str[i++] = ch;
  } while (ch != '\n');
  str[i] = '\0';
  return i;
}
*/
