#include <stdio.h>
#include <stdbool.h>

struct point { int x, y; };

struct rectangle { struct point upper_left, lower_right; };

int rectangle_get_area(struct rectangle r)
{
  int w = r.lower_right.x - r.upper_left.x;
  int h = r.lower_right.y - r.upper_left.y;

  return w * h;
}
struct point rectangle_get_center(struct rectangle r)
{
  struct point p;
  p.x = (r.lower_right.x + r.upper_left.x) / 2;
  p.y = (r.lower_right.y + r.upper_left.y) / 2;

  return p;
}

struct rectangle rectangle_move(struct rectangle r, int x, int y)
{
  r.upper_left.x += x;
  r.upper_left.y += y;
  r.lower_right.x += x;
  r.lower_right.y += y;
  
  return r;

}

bool point_is_bound_by_rect(struct point p, struct rectangle r)
{
  if (!(r.upper_left.x < p.x && p.x < r.lower_right.x))
  {
    return false;
  }
  else if (!(r.upper_left.y < p.y && p.y < r.lower_right.y))
  {
    return false;
  }
  else
  {
    return true;
  }
}

int main(void)
{
  printf("\n\n\n");
  //a.
  //	a 100x200 rectangle with the upper left point
  //	at 30, 50:
  struct rectangle rect;
  rect.upper_left.x = 50;
  rect.upper_left.y = 30;
  rect.lower_right.x = 250;
  rect.lower_right.y = 130;

  // printf("%d", rectangle_get_area(rect));
  // printf("\n");

  //b.
  // struct point center = rectangle_get_center(rect);
  // printf("x value of rect center: %d\n", center.x);
  // printf("x value of rect center: %d\n", center.y);

  //c.
  // printf("Original rect.upper_left.x value = %d\n", rect.upper_left.x);
  // printf("Original rect.upper_left.y value = %d\n", rect.upper_left.y);
  // printf("Original rect.lower_right.x value = %d\n", rect.lower_right.x);
  // printf("Original rect.lower_right.y value = %d\n", rect.lower_right.y);
  // printf("\n\n");
  //
  // struct rectangle shifted = rectangle_move(rect, 30, 50);
  // printf("Shifted rect.upper_left.x value = %d\n", shifted.upper_left.x);
  // printf("Shifted rect.upper_left.y value = %d\n", shifted.upper_left.y);
  // printf("Shifted rect.lower_right.x value = %d\n", shifted.lower_right.x);
  // printf("Shifted rect.lower_right.y value = %d\n", shifted.lower_right.y);

  //d.
  struct point p = {100, 120};
  printf("Point p at:\nx = %d\ny = %d\nis%swithin rect", p.x, p.y, point_is_bound_by_rect(p, rect) ? " " : " not ");






  printf("\n\n\n");
  return 0;
}
