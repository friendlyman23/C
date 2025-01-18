#include <stdio.h>
#include <stdlib.h>

struct student
{
	unsigned char id;
	unsigned char age;
};

struct classroom
{
	unsigned short id;
	struct student students[];
};

int main(void)
{

	// struct classroom *class = malloc( 
	// 																	sizeof(struct classroom)
	// 																	+ 
	// 																	10 * sizeof(struct student) 
	// 																);

	double e;

	printf("%lu", sizeof e);


	return 0;
}
