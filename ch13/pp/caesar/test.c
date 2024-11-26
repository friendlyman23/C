#include <stdio.h>
#include <ctype.h>

int main(void)
{
   printf("\n\n\n"); 

   char *alpha = "abcdefghijklmnopqrstuvwxyz";
   char *p = alpha;
   int count = 0;

   for (;;)
   {
      if (count++ > 25) break;
      printf("%c\nLower: %d\nUpper: %d\n\n", *p, *p, toupper(*p));
      p++;
   }

   printf("\n\n\n"); 
   
   
   return 0;
}
