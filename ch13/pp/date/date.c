#include <stdio.h>

int main(void)
{

   printf("\n\n\n");

   char *months[] = {"",   "January", "February", "March", 
			   "April", "May", "June", "July", 
			   "August", "September", "October", 
			   "November", "December"};

   int digit_month;
   
   printf("Enter a date (mm/dd/yyyy): ");

   scanf("%d/", &digit_month);

   printf("You entered the date: %s ", months[digit_month]);

   int day, year;
   scanf("%d/%d/", &day, &year);

   printf("%d, %d", day, year);

   printf("\n\n\n");







   return 0;
}
