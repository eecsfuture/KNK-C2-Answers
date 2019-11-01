#include <stdio.h>

struct complex {
  double real;
  double imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(const struct complex c1, const struct complex c2);

int main(void)
{
  struct complex c1, c2, c3;
  c1 = make_complex(0.0, 1.0);
  c2 = make_complex(1.0, 0.0);
  c3 = add_complex(c1, c2);
  
  return 0;
}


struct complex make_complex(double real, double imaginary) {
  struct complex c;
  c.real = real;
  c.imaginary = imaginary;
  
  return c;
}

struct complex add_complex(const struct complex c1, const struct complex c2) {
  struct complex c;
  c.real = c1.real + c2.real;
  c.imaginary = c1.imaginary + c2.imaginary;

  return c;
}
