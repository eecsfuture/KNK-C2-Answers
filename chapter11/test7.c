#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
  int d, y, month, day;
  
  printf("Enter day_of_year(1~366) and year(e.g. 2019): ");
  scanf("%d%d", &d, &y);

  split_date(d, y, &month, &day);
  printf("The month and day are: %d, %d\n", month, day);

  return 0;
}

void split_date(int day_of_year, int year, int *month, int *day) {
  int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int i, remain_days;
  *month = 0;
  *day = 0;
  
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))  // 闰年2月加一天
    num_days[1]++;

  remain_days = day_of_year;
  for (i = 0; remain_days > 0; i++) {
    // *month++;  // 错误，自增运算符++比间接寻址运算符*的优先级高，上述语句相当于*(month++);  即，地址先自增，再取内容，然后丢弃内容，没有修改外部month的内容，还是0，因为第21行已对其初始化为零
    (*month)++;  // 改为这样就对了，或者这样 *month = *month + 1;
    *day = remain_days;
    remain_days -= num_days[i];
  }
}












