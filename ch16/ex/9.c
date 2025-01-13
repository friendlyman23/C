#include <stdio.h>
#include <stdbool.h>

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

struct color make_color(int red, int green, int blue)
{
  struct color s;
  int a[] = {red, green, blue};

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
  {
    if (a[i] < 0)
    {
      a[i] = 0;
    }

    if (a[i] > 255)
    {
      a[i] = 255;
    }
  }

  s.red = a[0];
  s.green = a[1];
  s.blue = a[2];

  return s;
}

int getRed(struct color c)
{
  return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
  if (color1.red != color2.red)
  {
    return false;
  }
  else if (color1.green != color2.green)
  {
    return false;
  }
  else if (color1.blue != color2.blue)
  {
    return false;
  }
  else
  {
    return true;
  }
}

struct color brighter(struct color c)
{
  int a[] = {c.red, c.green, c.blue};
  bool all_zero = true;

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
  {
    if (a[i] != 0)
    {
      all_zero = false;
      break;
    } 
  }

  if (all_zero)
  {
    c.red = 3;
    c.green = 3;
    c.blue = 3;

    return c;
  }

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
  {
    if (a[i] > 0 && a[i] < 3)
    {
      a[i] = 3;
    }

    a[i] /= 0.7;

    if (a[i] > 255)
    {
      a[i] = 255;
    }
  }

  c.red = a[0];
  c.green = a[1];
  c.blue = a[2];

  return c;
}

struct color darker(struct color c)
{
  int a[] = {c.red, c.green, c.blue};

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
  {
    a[i] *= 0.7;
  }
  
  c.red = a[0];
  c.green = a[1];
  c.blue = a[2];

  return c;
}

int main(void)
{
  printf("\n\n\n");
  
  //a.
  struct color cool_color = make_color(43, 150, 123);
  struct color other_cool_color = make_color(256, 37, 21);
  //
  // print_color_struct(cool_color);
  // printf("\n");
  // print_color_struct(other_cool_color);

  //b.
  // printf("value of red: %d", getRed(cool_color));

  //c.
  // printf("The colors are%sequal", equal_color(cool_color, other_cool_color) ? " " : " not ");

  //d.
  // printf("Original color:\n");
  // print_color_struct(cool_color);
  // printf("\n\n");
  //
  // struct color brighter_cool_color = brighter(cool_color);
  // printf("Brighter version:\n");
  // print_color_struct(brighter_cool_color);

  //e.
  printf("Original color:\n");
  print_color_struct(cool_color);
  printf("\n\n");

  struct color darker_cool_color = darker(cool_color);
  printf("Darker version:\n");
  print_color_struct(darker_cool_color);







  printf("\n\n\n");
  return 0;
}
