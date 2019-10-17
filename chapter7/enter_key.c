#include <stdio.h>
#include <unistd.h>

int main(void)
{
  printf("To C, or not to C: that is the question.\n");
  printf("To C, or not to C: \rthat is \r");
                fflush(stdout);
printf("\n");
                //sleep(1);
  //printf("To C, or not to C: that is the question.\n");
  return 0;
}

// https://blog.csdn.net/qq_26093511/article/details/53255970

// \n是另起一行，\r的话回到本行的开头，如果继续输入的话会把先前的覆盖掉

// 对于标准输出，需要输出的数据并不是直接输出到终端上，而是首先缓存到某个地方，当遇到行刷新标志或者该缓存已满的情况下，才会把缓存的数据显示到终端设备上。

// ANSI C中定义换行符'\n'可以认为是行刷新标志。所以，printf函数没有带'\n'是不会自动刷新输出流，直至缓存被填满。
