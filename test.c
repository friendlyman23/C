#include <stdio.h>
#include <string.h>

int main(void)
{
   char *hi = "sup";

   printf("%d\n", strlen(hi));

   printf("%s", hi);
   hi[1] = 'x';
   printf("%s", hi);

   return 0;
}
