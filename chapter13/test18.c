#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void remove_filename(char *url);

int main(void)
{
  char file_name[] = "http://www.knking.com/index.html";
  
  printf("%s\n", file_name);
  remove_filename(file_name);
  printf("%s\n", file_name);

  return 0;
}


void remove_filename(char *url) {
  char *p;
  while (*url) {
    if (*url == '/')
      p = url;
    url++;
  }
  *p = '\0';
}









