#include <stdio.h>
#include <stdbool.h>

struct color {
  int red;
  int green;
  int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void)
{
  struct color c1 = make_color(200, 50, 100);
  struct color c2 = make_color(100, 50, 100);
  printf("red = %d, green = %d, blue = %d\n", c1.red, c1.green, c1.blue);
  printf("red = %d\n", getRed(c1));
  printf("equal_color = %d\n", equal_color(c1, c2));
  c1 = brighter(c1);
  printf("red = %d, green = %d, blue = %d\n", c1.red, c1.green, c1.blue);
  c1 = darker(c1);
  printf("red = %d, green = %d, blue = %d\n", c1.red, c1.green, c1.blue);

  return 0;
}


struct color make_color(int red, int green, int blue) {
  struct color c;
  c.red = red;
  c.green = green;
  c.blue = blue;
  if (c.red < 0) c.red = 0;
  if (c.red > 255) c.red = 255;
  if (c.green < 0) c.green = 0;
  if (c.green > 255) c.green = 255;
  if (c.blue < 0) c.blue = 0;
  if (c.blue > 255) c.blue = 255;
  
  return c;
}

int getRed(struct color c) {
  return c.red;
}

bool equal_color(struct color color1, struct color color2) {
  bool r = true;
  if (color1.red != color2.red) r = false;
  if (color1.green != color2.green) r = false;
  if (color1.blue != color2.blue) r = false;

  return r;
}

struct color brighter(struct color c) {
  struct color r = c;
  if (r.red == 0 && r.green == 0 && r.blue == 0) {
    r.red = r.green = r.blue = 3;
  }
  if (r.red > 0 && r.red < 3) r.red = 3;
  if (r.green > 0 && r.green < 3) r.green = 3;
  if (r.blue > 0 && r.blue < 3) r.blue = 3;
  r.red /= 0.7;
  r.green /= 0.7;
  r.blue /= 0.7;
  if (r.red > 255) r.red = 255;
  if (r.green > 255) r.green = 255;
  if (r.blue > 255) r.blue = 255;
  
  return r;
}

struct color darker(struct color c) {
  c.red *= 0.7;
  c.green *= 0.7;
  c.blue *= 0.7;

  return c;
}









