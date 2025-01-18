#include <stdio.h>

struct part
{
	int number;
	char name[30+1];
	int on_hand;
};


int split(struct part db[], int low, int high)
{

	struct part partition = db[low];

	for (;;)
	{
		while (low < high && partition.number < db[high].number)
		{
			high--;
		}

		if (low >= high)
		{
			break;
		}

		db[low++] = db[high];

		while (low < high && db[low].number < partition.number)
		{
			low++;
		}

		if (low >= high)
		{
			break;
		}

		db[high--] = db[low];
	}

	db[high] = partition;

	return high;
};

void quicksort(struct part db[], int low, int high)
{

	int middle;
	int *test[] = {&db[0].number, &db[1].number, &db[2].number, &db[3].number, &db[4].number, &db[5].number, &db[6].number};

	if (low >= high)
	{
		return;
	}

	//split the db array
	middle = split(db, low, high);

	//qs on the remaining pieces of the array
	quicksort(db, low, middle - 1);
	quicksort(db, middle + 1, high);

};

int main(void)
{

	struct part s1 = {1, "sup", 5};
	struct part s2 = {2, "bro", 7};
	struct part s3 = {3, "dog", 63};
	struct part s4 = {4, "cool", 0};
	struct part s5 = {5, "nice", 18};
	struct part s6 = {6, "dude", 10000};
	struct part s7 = {7, "babe", 420};

	struct part db[] = {s4, s7, s1, s3, s6, s5, s2};

	quicksort(db, 0, (sizeof(db) / sizeof(db[0]) - 1));

	return 0;
}
