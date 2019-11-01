#include <stdio.h>

struct date {
  int month, day, year;
};

int day_of_year(struct date d);
int compare_dates(const struct date d1, const struct date d2);

int main(void)
{
  struct date d = {10, 31, 2019};
  printf("这是今年的第 %d 天。\n", day_of_year(d));
  struct date d2 = {10, 31, 2020};
  printf("这是今年的第 %d 天。\n", day_of_year(d2));
  
  printf("比较结果： %d\n", compare_dates(d, d2));
  
  return 0;
}


int day_of_year(struct date d)
{
  int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day_count = 0, i;

  for (i = 1; i < d.month; i++)
    day_count += num_days[i-1];

  /* adjust for leap years, assuming they are divisible by 4 */
  if (d.year % 4 == 0 && d.month > 2)
    day_count++;

  return day_count + d.day;
}

int compare_dates(const struct date d1, const struct date d2) {
  int day1, day2;
  day1 = day_of_year(d1);
  day2 = day_of_year(d2);
  
  if (day1 < day2)
    return -1;
  else if (day1 == day2)
    return 0;
  else
    return 1;
}


