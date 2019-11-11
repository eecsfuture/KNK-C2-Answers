#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *create_array(long int n, int initial_value);

int main(void)
{
  long int n = 100000000000;
  int initial_value = 10;
  int *p = create_array(n, initial_value);
  if (p == NULL) {
    printf("Error: malloc failed in create_array!\n");
    return 0;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", p[i]);
  }
  printf("\n");
  return 0;
}

int *create_array(long int n, int initial_value) {

  int *p = malloc(n * sizeof(int));
  
  if (p == NULL) {
    printf("Error: malloc failed in create_array!\n");
    return NULL;
  }
  
  for (int i = 0; i < n; i++) {
    p[i] = initial_value;
  }
  
  return p;
}


