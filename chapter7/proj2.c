#include <stdio.h>

int main(void)
{
  int i, n;
  char ch;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  ch = getchar();  // scanf函数会把最后的回车符退到缓存区，如果没有这行
                   // 遇到第一个24时，会直接继续打印到48
    /* dispose of new-line character following number of entries */
    /* could simply be getchar(); */

  for (i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, i * i);
    if (i % 24 == 0) {
      printf("Press Enter to continue...");
      ch = getchar();   /* or simply getchar(); */
      //printf("%c", ch);  // 如果只输入回车键，该语句可以将其打印出来
                         // 如果输入其他字符，再加上回车键，会一个一个显示
                         // 出来，因为getchar()每次只能从缓冲区读取一个进来
    }
  }

  return 0;
}
