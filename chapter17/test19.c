#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 60

void new_cmd(void) {
  printf("new_cmd function done.\n");
}

void open_cmd(void) {
  printf("open_cmd function done.\n");
}

void close_cmd(void) {
  printf("close_cmd function done.\n");
}

void close_all_cmd(void) {
  printf("close_all_cmd function done.\n");
}

void save_cmd(void) {
  printf("save_cmd function done.\n");
}

void save_as_cmd(void) {
  printf("save_as_cmd function done.\n");
}

void save_all_cmd(void) {
  printf("save_all_cmd function done.\n");
}

void print_cmd(void) {
  printf("print_cmd function done.\n");
}

void exit_cmd(void) {
  printf("exit_cmd function done.\n");
  exit(EXIT_SUCCESS);
}

void find_cmd_function(char *s);
int read_line(char str[], int n);

struct {
  char *cmd_name;
  void (*cmd_pointer)(void);
} file_cmd[] =
 { {"new",       new_cmd},
   {"open",      open_cmd},
   {"close",     close_cmd},
   {"close all", close_all_cmd},
   {"save",      save_cmd},
   {"save as",   save_as_cmd},
   {"save all",  save_all_cmd},
   {"print",     print_cmd},
   {"exit",      exit_cmd}
 };

int main(void)
{
  char cmd_str[MSG_LEN+1];
  for (;;) {
    printf("Enter a command:\n");
    read_line(cmd_str, MSG_LEN);
    //printf("%s\n", cmd_str);
    //printf("%d\n", (int) (sizeof(file_cmd) / sizeof(file_cmd[0])));
    find_cmd_function(cmd_str);
  }
  return 0;
}

void find_cmd_function(char *s) {
  int i, flag = 0;
  for (i = 0; i < (int) (sizeof(file_cmd) / sizeof(file_cmd[0])); i++) {
    if (strcmp(s, file_cmd[i].cmd_name) == 0) {
      (*file_cmd[i].cmd_pointer)();
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("cmd string is wrong.\n");
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
