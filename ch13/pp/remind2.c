/* Improve the remind.c program of section 13.5 in the following ways:
*
* a.) Have the program print an error message and ignore a reminder if the 
*	 corresponding day is negative or larger than 31. Hint: use the continue statement.
*
* b.) Allow the user to enter a day, a 24-hour time, and a reminder. The printed
*	 reminder list should be sorted first by day, then by time. (The original
*	 program allows the user to enter a time, but it's treated as part of the reminder.)								  
*								  
* c.) Have the program print a one-year reminder list. Require the user to enter
*	 days in the form month/day. */

/* Prints a one-month reminder list */
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // maximum number of reminders
#define MSG_LEN 60 // maximum length of reminder message

int read_line(char str[], int n);

int main(void)
{

   char reminders[MAX_REMIND][MSG_LEN + 3];
   char day_time_str[20 + 1], month_str[6 + 1], day_str[3 + 1], time_str[6 + 1], msg_str[MSG_LEN + 1];  
								     // day_time_str = two chars for the 
								     // month, one char for the /, two chars for the day, 
								     // one char for the space, two chars
								     // for the hr, one char for the colon,
								     // two chars for the mins, one space, one null char.
								     // 2 + 1 + 2 + 1 + 2 + 1 + 1 = 9 chars + 1 null char
   int day, month, i, j, hr, min, num_remind = 0;

   for (;;)					// loop until quit condition condition
   {
      if (num_remind == MAX_REMIND)		// reject if array is full
      {
	 printf("-- No space left --\n");
	 break;
      }

      printf("Enter day (mm/dd), 24-hour time and reminder: ");	// prompt
      scanf("%2d/", &month);			// get the month 
      if (month == 0)				// quit condition
	 break;
      scanf("%2d", &day);			// get the day 


      if (day < 0 || day > 31)
      {
	 printf("Reminder discarded. "
	 "Day must be greater than 0 and less than 31.\n\n");
	 read_line(msg_str, MSG_LEN);		// clear stdin buffer
	 continue;
      }

      scanf("%2d:%2d ", &hr, &min);		// get the time



      sprintf(month_str, "%4.2d/", month);	// convert month to str
      sprintf(day_str, "%2.2d ", day);	// convert day to str
      sprintf(time_str, "%2.2d:%2.2d ", hr, min);	// convert time to str
      strcpy(day_time_str, month_str);		// combine day and time strings
      strcat(day_time_str, day_str);		// combine day and time strings
      strcat(day_time_str, time_str);		// combine day and time strings

      read_line(msg_str, MSG_LEN);		// get the reminder

      for (i = 0; i < num_remind; i++)
      {
	 if (strcmp(day_time_str, reminders[i]) < 0) // iterate thru and find the first day day_str is less than
	    break;
      }
      for (j = num_remind; j > i; j--)
      {
	 strcpy(reminders[j], reminders[j-1]);	// iterate thru starting at the end; move all the reminders down one
				 		// to accommodate the new reminder
      }

      strcpy(reminders[i], day_time_str);		// copy day_str into the row
      strcat(reminders[i], msg_str);		// cat msg_str onto str after day_str

      num_remind++;				// increment num_remind
   }

   printf("\nMonth Day Time Reminder\n");			// print the reminders
   for (i = 0; i < num_remind; i++)
      printf(" %s\n", reminders[i]);
   printf("\n");

   return 0;
}

int read_line(char str[], int n)
{
   int ch, i = 0;

   while ((ch = getchar()) != '\n')
      if (i < n)
	 str[i++] = ch;
   str[i] = '\0';
   return i;
}
