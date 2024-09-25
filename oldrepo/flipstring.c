#include <stdio.h>

int main(void)
{
   char x[] = "Hello";

   char *p = &x[0];

   while (*p != '\0') p++;

   p--;
   char *q = p;

   p = x;

   while (p < q) {
      char temp = *p;
      *p = *q;
      *q = temp;
      p++;
      q--;
   }
   
   printf("%s\n", x);

   return 0;
}
