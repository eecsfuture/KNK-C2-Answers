#include <stdio.h>
#include <string.h>

char a[50];
#define LINE_FILE \
        sprintf(a, "Line %d of file %s\n", __LINE__, __FILE__) > 0 ? a:a
// sprintf函数返回值为向数组中写入的字符数量，肯定是大于1的，会返回a


int main(void)
{
  const char *str = LINE_FILE;
  printf("%s\n", str);
  return 0;
}
