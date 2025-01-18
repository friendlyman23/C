#include <stdio.h>

struct point { int x, y; };

#define CIRCLE 0
#define RECTANGLE 1

struct shape
{
  int shape_kind; // RECTANGLE or CIRCLE
  struct point center; // COORDINATES of center

  union
  {
    struct
    {
      int height, width;
    } rectangle;

    struct
    {
      int radius;
    } circle;

  } u;

};

float shape_area(struct shape s)
{
  switch(s.shape_kind)
  {
    case CIRCLE:
      return 3.14 * (s.u.circle.radius * s.u.circle.radius);
    case RECTANGLE:
      return s.u.rectangle.height * s.u.rectangle.width;
  }

}

struct shape shape_move(struct shape s, int x, int y)
{
	s.center.x += x;
	s.center.y += y;
  
  return s;

}

int main(void)
{
  printf("\n\n\n");

  struct shape rect = {.shape_kind = RECTANGLE, .center = {.x = 10, .y = 10}, 
												.u.rectangle.height = 5, .u.rectangle.height = 4};	

  struct shape circle = {.shape_kind = CIRCLE, .center = {.x = 10, .y = 10},
												.u.circle.radius = 5};	

	//a.
  // circle.u.circle.radius = 5;
  // printf("Area of circle with radius 5: %.3f\n\n", shape_area(circle));
  //
  // rect.u.rectangle.height = 5;
  // rect.u.rectangle.width = 4;
  // printf("Area of rectangle with width 5 and height 4: %.3f", shape_area(rect));

	//b.
  printf("Center of circle:\nx: %d\ny: %d", circle.center.x, circle.center.y);
	struct shape moved_circle = shape_move(circle, 10, 15);
  printf("\n\nCenter of moved circle:\nx: %d\ny: %d", moved_circle.center.x, moved_circle.center.y);

	printf("\n\n");
	
  printf("Center of rect:\nx: %d\ny: %d", rect.center.x, rect.center.y);
	struct shape moved_rect = shape_move(rect, 20, 25);
  printf("\n\nCenter of moved rect:\nx: %d\ny: %d", moved_rect.center.x, moved_rect.center.y);

  printf("\n\n\n");
  return 0;
}
