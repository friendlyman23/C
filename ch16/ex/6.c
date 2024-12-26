#include <stdio.h>

struct time
{
   int hours;
   int minutes;
   int seconds;
};

struct time split_time(long total_seconds)
{
   struct time t;

   t.hours = total_seconds / (60 * 60);
   total_seconds %= 60*60;

   t.minutes = total_seconds / 60;
   total_seconds %= 60;

   t.seconds = total_seconds;

   return t;
}

int main(void)
{
   printf("\n\n\n");

   /*printf("%d", (11 * 60 * 60) + (22 * 60));*/

   long this_time = 63139;

   struct time splitted_time = split_time(this_time);

   printf("hours: %d\nminutes: %d\nseconds: %d", splitted_time.hours, splitted_time.minutes, splitted_time.seconds);

   printf("\n\n\n");
     
   return 0;
}
