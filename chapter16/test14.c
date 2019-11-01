#include <stdio.h>
#include <stdbool.h>

#define RECTANGLE 0
#define CIRCLE 1

struct point { int x, y; };
struct shape {
  int shape_kind;
  struct point center;
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
     int radius;
    } circle;
  } u;
} s;

int area(struct shape s);
struct shape move(struct shape s, int x, int y);
struct shape scale(struct shape s, int c);

int main(void)
{
  s.shape_kind = CIRCLE;
  s.center.x = 5;
  s.center.y = 6;
  s.u.circle.radius = 10;
  
  printf("area = %d\n", area(s));
  s = move(s, 2, 2);
  printf("x = %d, y = %d\n", s.center.x, s.center.y);
  s = scale(s, 10);
  printf("x = %d, y = %d\n", s.center.x, s.center.y);
  printf("area = %d\n", area(s));
  
  return 0;
}

int area(struct shape s) {
  if (s.shape_kind == RECTANGLE)
    return s.u.rectangle.height * s.u.rectangle.width;
  else
    return 3.1415926 * s.u.circle.radius * s.u.circle.radius;
}

struct shape move(struct shape s, int x, int y) {
  struct shape s_new = s;
  s_new.center.x = s.center.x + x;
  s_new.center.y = s.center.y + y;
  return s_new;
}

struct shape scale(struct shape s, int c) {
  struct shape s_new = s;
  if (s_new.shape_kind == RECTANGLE) {
    s_new.u.rectangle.height *= c;
    s_new.u.rectangle.width *= c;
  } else {
    s_new.u.circle.radius *= c;
  }
  return s_new;
}






