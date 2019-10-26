#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
  char file_name[] = "memo.txt";
  char extension[10];
  
  get_extension(file_name, extension);
  printf("%s\n", file_name);
  printf("%s\n", extension);

  return 0;
}


void get_extension(const char *file_name, char *extension) {
  int i;
  int len = strlen(file_name);
  for (i = 0; i < len; i++) {
    if (file_name[i] == '.') {
      strcpy(extension, &file_name[i+1]);
      break;
    }
  }
  if (i == len)
    strcpy(extension, "");
}
