#include <stdio.h>
#include <stdbool.h>

#define ROWS 2
#define COLS 5
#define N 5

int main(void)
{
	printf("\n\n\n");
	
	int arr[] = {69, 1, 2, 3, 4};
	int *p = arr;

	printf("zero state: %d\n\n", *p);

	printf("value of expression: %d\n\n", *(p++));

	printf("after expression: %d\n\n", *p);








	printf("\n\n\n");
	return 0;
}

