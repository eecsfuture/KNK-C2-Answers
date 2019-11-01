#include <stdio.h>
#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int area(struct rectangle r);
struct point middle_point(struct rectangle r);
struct rectangle move(struct rectangle r, int x, int y);
bool is_in_area(struct point p, struct rectangle r);

int main(void)
{
  struct rectangle r = { {2, 10}, {8, 4} }, r_new;
  struct point p;
  printf("upper_left.x = %d, upper_left.y = %d\n", r.upper_left.x, r.upper_left.y);
  printf("lower_right.x = %d, lower_right.y = %d\n", r.lower_right.x, r.lower_right.y);
  printf("area = %d\n", area(r));
  p = middle_point(r);
  printf("middle point: x = %d, y = %d\n", p.x, p.y);
  r_new = move(r, 2, 2);
  printf("upper_left.x = %d, upper_left.y = %d\n", r_new.upper_left.x, r_new.upper_left.y);
  printf("lower_right.x = %d, lower_right.y = %d\n", r_new.lower_right.x, r_new.lower_right.y);
  p.x = 5;
  p.y = 5;
  printf("is_in_area = %d\n", is_in_area(p, r));
  printf("is_in_area = %d\n", is_in_area(p, r_new));
  return 0;
}

int area(struct rectangle r) {
  return (r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y);
}

struct point middle_point(struct rectangle r) {
  struct point p;
  p.x = (r.upper_left.x + r.lower_right.x) / 2;
  p.y = (r.upper_left.y + r.lower_right.y) / 2;
  
  return p;
}

struct rectangle move(struct rectangle r, int x, int y) {
  struct rectangle r_new;
  r_new.upper_left.x = r.upper_left.x + x;
  r_new.upper_left.y = r.upper_left.y + y;
  r_new.lower_right.x = r.lower_right.x + x;
  r_new.lower_right.y = r.lower_right.y + y;
  
  return r_new;
}

bool is_in_area(struct point p, struct rectangle r) {
  if (p.x > r.upper_left.x && p.y < r.upper_left.y && p.x < r.lower_right.x
      && p.y > r.lower_right.y)
    return true;
  else
    return false;
}






