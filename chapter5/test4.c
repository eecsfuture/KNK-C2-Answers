#include <stdio.h>

int main(void)
{
  int i;
  int j;

  printf("enter i and j\n");
  scanf("%d/%d", &i, &j);
  printf("%d\n", (i < j ? -1 : 0) + (i > j));



















  return 0;
}
