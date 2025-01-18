#include <stdio.h>

struct point { int x, y; };

#define CIRCLE 0
#define RECTANGLE 1

int main(void)
{
  printf("\n\n\n");

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

  } s;

  s.shape_kind = RECTANGLE;
  s.center.x = 10;
  // s.height = 25; //should be s.u.rectangle.height
  s.u.rectangle.height = 25;
  s.u.rectangle.width = 8;
  // s.u.circle = 5; //should be s.u.circle.radius
  s.u.circle.radius = 5; 
  // s.u.radius = 5; //should be s.u.circle.radius

  printf("\n\n\n");
  return 0;
}
