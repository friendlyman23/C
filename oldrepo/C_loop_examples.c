#include <stdio.h>

#define ROWS 2
#define COLS 5
#define N 5

int main(void)
{
	printf("\n\n\n");

	int arr[] = {0, 1, 2, 3, 4};

	int sum = 0;

	for (int *p = &arr[0]; p < &arr[N]; p++) {
		printf("Iteration %d:\n", p - &arr[0]);
		printf("%d\n", *p);

		sum += (*p)++;
		printf("%d\n", *p);
		printf("%p\n\n", p);
	}


	printf("sum: %d\n\n\n\n", sum);
	/* or */

	int *p = &arr[0];

	sum = 0;
	while (p < &arr[N]) {
		printf("Iteration %d:\n", p - &arr[0]);
		printf("%d\n", *p);
		sum += (*p)++;
		printf("%d\n", *p);
		printf("%p\n\n", p);
	}
	
	printf("sum: %d", sum);

	printf("\n\n\n");
	return 0;
}

