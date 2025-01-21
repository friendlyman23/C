#include <stdio.h>
//	write a program that prompts the user to enter two
//	dates and then indicates which date comes earlier
//	on the calendar
//
// each date entered by the user is stored in a date structure
// 	incorporate compare_dates

struct date
{
	int month;
	int day;
	int year;
};

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

int compare_dates(struct date d1, struct date d2)
{
	struct date *date_arr[] = {&d1, &d2};

	// account for century
	for (int i = 0; i < sizeof(date_arr) / sizeof(date_arr[0]); i++)
	{
		if (26 <= date_arr[i]->year && date_arr[i]->year <= 99)
		{
			date_arr[i]->year += 1900;
		}
		else
		{
			date_arr[i]->year += 2000;
		}
	}
	// see if we can determine based on the year
	if (d1.year < d2.year)
	{
		return -1;
	}
	else if (d2.year < d1.year)
	{
		return 1;
	}
	// if not, the dates have the same year, and we need to compare days
	else 
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
			return 1;
		}
	}
};

int main(void)
{
	printf("\n\n\n");
	struct date first, second;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &first.month, &first.day, &first.year); 
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &second.month, &second.day, &second.year); 

	int result = compare_dates(first, second);
	struct date *earlier, *later;

	if (result == -1)
	{
		earlier = &first;
		later = &second;
	}
	else if (result == 1)
	{
		earlier = &second;
		later = &first;
	}
	else
	{
		printf("\nThe dates are the same\n\n\n");
		return 0;
	}

	printf("\n%d/%d/%02d is earlier than %d/%d/%02d", earlier->month, earlier->day, earlier->year, later->month, later->day, later->year);



	printf("\n\n\n");
	return 0;
}
