#include <stdio.h>

int main(void)
{
  struct IEEE_float {
    unsigned int fraction: 23;   /* members may need to be reversed */
    unsigned int exponent: 8;
    unsigned int sign: 1;
  };
  
  union float_union {
    float f;
    struct IEEE_float fd;
  };
  
  union float_union u;
  u.f = -3.1415916;
  printf("%d/%d/%d\n", u.fd.fraction, u.fd.exponent, u.fd.sign);
 
  return 0;
}
