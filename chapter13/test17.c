#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void get_extension(const char *file_name, char *extension);
bool test_extension(const char *file_name, const char *extension);

int main(void)
{
  char file_name[] = "memo.txt", extension1[10], extension2[] = "TXT";
  
  get_extension(file_name, extension1);
  printf("%s\n", file_name);
  printf("%s\n", extension1);
  printf("%d\n", test_extension(file_name, extension2));

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

bool test_extension(const char *file_name, const char *extension) {
  char real_extension[10];
  char s, t;
  
  get_extension(file_name, real_extension);
  
  char *real = real_extension;  // 不能直接对数组名进行自增操作
  while (*extension) {
    s = toupper(*real++);
    t = toupper(*extension++);
    if (s != t)
      return false;
  }
  return true;
}










