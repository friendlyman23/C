#include <stdio.h>

int main(void)
{
   printf("\n\n\n");

   struct { int x, y; } x;
   struct { int x, y; } y;

   x.x = 3;
   x.y = 4;
   y.x = 6;
   y.y = 7;

   printf("x.x = %d (should equal 3)\n\n", x.x);
   printf("x.y = %d (should equal 4)\n\n", x.y);

   printf("y.x = %d (should equal 6)\n\n", y.x);
   printf("y.y = %d (should equal 7)\n\n", y.y);





   printf("\n\n\n");
   return 0;
}

