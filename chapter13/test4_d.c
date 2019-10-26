#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n, char back_str[], int back_n);

#define MSG_LEN 5
#define BACKUP_LEN 50

int main(void)
{
  char s[MSG_LEN+1], backup[BACKUP_LEN+1];

  read_line(s, MSG_LEN, backup, BACKUP_LEN);

  printf("%s", s);
  printf("\n");
  printf("%s", backup);
  printf("\n");
  return 0;
}

// 把没有空间存储的字符留下以后备用
int read_line(char str[], int n, char back_str[], int back_n) {
  int ch, i = 0, j = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    } else {
      if (j < back_n)
        back_str[j++] = ch;
    }
  }
  str[i] = '\0';
  back_str[j] = '\0';
  return i;
}
