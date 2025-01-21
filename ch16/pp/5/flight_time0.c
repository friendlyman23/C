// Store times in a single array
// array elems are structs; each contains a departure and arrival time
// times are ints representing the number of minutes since midnight
// program should loop thru array for dep time closest to entered time

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{

	printf("\n\n\n");

	struct flight
	{
		int dep;
		int arr;
	};

	const struct flight times[]=
	{
		{(8 * 60) + 0,				(10 * 60) + 16},
		{(9 * 60) + 43,				(11 * 60) + 52},
		{(11 * 60) + 19,				(13 * 60) + 31},
		{(12 * 60) + 47,				(15 * 60) + 0},
		{(14 * 60) + 0,				(16 * 60) + 8},
		{(15 * 60) + 45,				(17 * 60) + 55},
		{(19 * 60) + 0,				(21 * 60) + 20},
		{(21 * 60) + 45,				(23 * 60) + 58},
	};

	int hours, mins;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &mins);

	int input_time = (hours * 60) + mins;
	

	int i = 1;
	struct flight *closest = &times[0];

	for (; i < sizeof times / sizeof times[0]; i++)
	{
		double this_diff = fabs((double) times[i].dep - input_time);
		double closest_diff = fabs((double) closest->dep - input_time);

		if (this_diff < closest_diff)
		{
			*closest = times[i];
		}
		
	}

	int dep_hr = closest->dep / 60;
	bool dep_pm_flag = false;
	if (dep_hr > 12)
	{
		dep_pm_flag = true;
		dep_hr %= 12;
	}
	int dep_mins = closest->dep % 60;

	int arr_hr = closest->arr / 60;
	bool arr_pm_flag = false;
	if (arr_hr > 12)
	{
		arr_pm_flag = true;
		arr_hr %= 12;
	}
	int arr_mins = closest->arr % 60;

	printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s",
					dep_hr, dep_mins, dep_pm_flag ? "p.m." : "a.m.", 
					arr_hr, arr_mins, arr_pm_flag ? "p.m." : "a.m."
				);

	printf("\n\n\n");

	return 0;
}
