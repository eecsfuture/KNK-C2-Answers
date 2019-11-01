#include <stdio.h>

typedef struct {
  double real;
  double imaginary;
} Complex;

Complex make_complex(double real, double imaginary);
Complex add_complex(const Complex c1, const Complex c2);

int main(void)
{
  Complex c1, c2, c3;
  c1 = make_complex(0.0, 1.0);
  c2 = make_complex(1.0, 0.0);
  c3 = add_complex(c1, c2);
  
  return 0;
}


Complex make_complex(double real, double imaginary) {
  Complex c;
  c.real = real;
  c.imaginary = imaginary;
  
  return c;
}

Complex add_complex(const Complex c1, const Complex c2) {
  Complex c;
  c.real = c1.real + c2.real;
  c.imaginary = c1.imaginary + c2.imaginary;

  return c;
}
