#include <stdio.h>
#include <ctype.h>

int main(void)
{
   printf("\n\n\n");

   char msg[50];
   char msg2[sizeof msg / sizeof msg[0]];

   printf("sizeof msg: %lu\n", sizeof msg);
   printf("sizeof msg2: %lu", sizeof msg2);
   printf("\n\n");
   printf("sizeof msg / sizeof msg[0]: %lu\n", sizeof msg / sizeof msg[0]);
   printf("sizeof msg2 / sizeof msg2[0]: %lu ", sizeof msg2 / sizeof msg2[0]);

   printf("\n\n\n");





   return 0;
}
