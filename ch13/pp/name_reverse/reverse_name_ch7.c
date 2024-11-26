#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 50

int main(void)
{
   printf("Enter a first and last name: ");

   char first_l = getchar();

   char ch;

   while ((ch = getchar()) != ' ');

   while ((ch = getchar()) != '\n')
   {
      putchar(ch);
   }

   printf(", %c.", first_l);


   

   





   



   






   printf("\n\n\n");



   return 0;
}
