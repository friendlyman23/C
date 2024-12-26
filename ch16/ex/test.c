#include <stdio.h>

int main(void)
{

   int n = 99;
   int m = 22;
   int temp;

   while (1)
   {
      if (n == 0)
      {
	 break;
      }

      temp = n;
      n = m % n;
      m = temp;
   }

   printf("%d", m);







   return 0;
}
