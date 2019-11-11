#include <stdio.h>
#include <stdlib.h>

char *my_malloc(long int n);

int main(void)
{
  long int n = 1000000000000;
  char *p = my_malloc(n);
  printf("%ld\n", (long int) p);
  return 0;
}

char *my_malloc(long int n) {
  char *result = malloc(n);
  if (result == NULL) {
    printf("Error: malloc failed in my_malloc!\n");
    exit (EXIT_FAILURE);
  }
  return result;
}
