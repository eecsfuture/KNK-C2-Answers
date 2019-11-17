#include <stdio.h>

int count_ones(unsigned char ch);

int main(void)
{
  unsigned char i = 0x0F;
  printf("%d\n", (int) sizeof(i));
  printf("count_ones result is: %d\n", count_ones(i));

  return 0;
}

// 用递归算法代替for循环，暂时没有想到其他好的方法
int count_ones(unsigned char ch) {
  int ones_num = 0;
  static int i = 0;
  if (i < 8) {
    if (ch & 1 << i)
      ones_num = 1;
    else
      ones_num = 0;
    i++;
    printf("count_ones called time is %d\n", i);
    return ones_num + count_ones(ch);
  } else {
    return 0;
  }
}
