#include <stdio.h>

struct time {
  int hours, minutes, seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
  long seconds;
  struct time t;
  printf("Enter total seconds(range = 0~86400): \n");
  scanf("%ld", &seconds);
  t = split_time(seconds);
  printf("hours = %d, minutes = %d, seconds = %d\n", t.hours, t.minutes, t.seconds);

  return 0;
}

struct time split_time(long total_seconds) {
  struct time t;
  t.hours = total_seconds / 3600;
  total_seconds %= 3600;
  t.minutes = total_seconds / 60;
  t.seconds = total_seconds % 60;

  return t;
}


