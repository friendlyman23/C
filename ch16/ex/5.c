#include <stdio.h>

struct date
{
   int month;
   int day;
   int year;
};
//a.
int day_of_year(struct date d)
{
   int th_day = 0;

   int days_per_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

   for (int i = 1; i < d.month; i++)
   {
      th_day += days_per_month[i];
   }

   th_day += d.day;

   return th_day;
}

//b.
int compare_dates(struct date d1, struct date d2)
{
   int d1_day, d2_day;

   d1_day = day_of_year(d1);
   d2_day = day_of_year(d2);

   if (d1_day < d2_day)
   {
      return -1;
   }
   else if (d1_day == d2_day)
   {
      return 0;
   }
   else 
   {
      return +1;
   }
}

int main(void)
{
   printf("\n\n\n");

   //a.
   /*struct date the_date = {12, 22, 24};*/
   /**/
   /*printf("Today is the %dth day of the year", day_of_year(the_date));*/

   //b.
   struct date date_1 = {12, 23, 24};
   struct date date_2 = {12, 22, 24};

   printf("%d", compare_dates(date_1, date_2));

   printf("\n\n\n");
     
   return 0;
}
