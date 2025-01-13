#include <stdio.h>

struct color 
{
  int red;
  int green;
  int blue;
};

void print_color_struct(const struct color s)
{
  printf("red = %d\n", s.red);
  printf("green = %d\n", s.green);
  printf("blue = %d\n", s.blue);
}

int main(void)
{

  //a.
  const struct color MAGENTA = {255, 0, 255};

  print_color_struct(MAGENTA);

  return 0;
}
