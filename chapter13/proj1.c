#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define LEN 20

int read_line(char str[], int n);

int main(void)
{
  char smallest_word[LEN+1], largest_word[LEN+1], s[LEN+1];
  int str_len;
  
  printf("Enter word: ");
  read_line(s, LEN);
  str_len = strlen(s);
  //printf("str_len: %d\n", str_len);
  strcpy(smallest_word, s);
  strcpy(largest_word, s);
  
  while (1) {
    if (str_len == 4) break;
    printf("Enter word: ");
    read_line(s, LEN);
    str_len = strlen(s);
    if (strcmp(s, smallest_word) < 0)
      strcpy(smallest_word, s);
    if (strcmp(s, largest_word) > 0)
      strcpy(largest_word, s);
  }
  printf("Smallest word: %s\n", smallest_word);
  printf("Largest word: %s\n", largest_word);

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

// 官网答案
/*
#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

void read_line(char str[], int n);

int main(void)
{
  char smallest_word[WORD_LEN+1],
       largest_word[WORD_LEN+1],
       current_word[WORD_LEN+1];

  printf("Enter word: ");
  read_line(current_word, WORD_LEN);
  strcpy(smallest_word, strcpy(largest_word, current_word));

  while (strlen(current_word) != 4) {
    printf("Enter word: ");
    read_line(current_word, WORD_LEN);
    if (strcmp(current_word, smallest_word) < 0)
      strcpy(smallest_word, current_word);
    if (strcmp(current_word, largest_word) > 0)
      strcpy(largest_word, current_word);
  }

  printf("\nSmallest word: %s\n", smallest_word);
  printf("Largest word: %s\n", largest_word);

  return 0;
}

void read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
}
*/





