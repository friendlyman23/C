#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   printf("\n\n\n");

   printf("Enter a two-digit number: ");

   int num;

   scanf("%d", &num);

   printf("You entered the number ");
   
   char *tens_str[] = {[2] = "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
   char *ones_str[] = {[1] = "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
   char *teens_str[] = {[10] = "ten", [11] = "eleven", [12] = "twelve", [13] = "thirteen", [14] = "fourteen", [15] = "fifteen", [16] = "sixteen", [17] = "eighteen", [19] = "nineteen"};



   if(num > 20)
   {
      int tens = num / 10;
      int ones = num % 10;
      printf("%s", tens_str[tens]);
      if(ones)
      {
	 printf("-%s", ones_str[ones]);
      }
   }
   else
   {
      printf("%s", teens_str[num]);
   }

   printf("%c\n\n", '.');
   

	 

















   printf("\n\n\n");

   return 0;
}
