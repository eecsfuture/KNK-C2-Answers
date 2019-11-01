#include <stdio.h>

struct fraction {
  int num;  // 分子
  int den;  // 分母
};

struct fraction simplify(struct fraction f);
int gcd(int m, int n);
struct fraction add(struct fraction a, struct fraction b);
struct fraction sub(struct fraction a, struct fraction b);
struct fraction multiply(struct fraction a, struct fraction b);
struct fraction devide(struct fraction a, struct fraction b);

int main(void)
{
  struct fraction f1 = {10, 25}, f2 = {20, 75}, f3;
  f1 = simplify(f1);
  f2 = simplify(f2);
  printf("num = %d, den = %d\n", f1.num, f1.den);
  printf("num = %d, den = %d\n", f2.num, f2.den);
  
  f3 = add(f1, f2);
  printf("num = %d, den = %d\n", f3.num, f3.den);
  f3 = sub(f1, f2);
  printf("num = %d, den = %d\n", f3.num, f3.den);
  f3 = multiply(f1, f2);
  printf("num = %d, den = %d\n", f3.num, f3.den);
  f3 = devide(f1, f2);
  printf("num = %d, den = %d\n", f3.num, f3.den);

  return 0;
}

struct fraction simplify(struct fraction f) {
  int r = gcd(f.num, f.den);
  f.num /= r;
  f.den /= r;
  
  return f;
}

int gcd(int m, int n) {
  int remainder;
  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }
  return m;
}

struct fraction add(struct fraction a, struct fraction b) {
  struct fraction r;
  r.num = a.num * b.den + b.num * a.den;
  r.den = a.den * b.den;
  
  return simplify(r);
}

struct fraction sub(struct fraction a, struct fraction b) {
  struct fraction r;
  r.num = a.num * b.den - b.num * a.den;
  r.den = a.den * b.den;
  
  return simplify(r);
}

struct fraction multiply(struct fraction a, struct fraction b) {
  struct fraction r;
  r.num = a.num * b.num;
  r.den = a.den * b.den;
  
  return simplify(r);
}

struct fraction devide(struct fraction a, struct fraction b) {
  struct fraction r;
  r.num = a.num * b.den;
  r.den = a.den * b.num;
  
  return simplify(r);
}






