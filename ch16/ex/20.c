#include <stdio.h>

int main(void)
{
  printf("\n\n\n");

	enum {NORTH, SOUTH, EAST, WEST} direction;		

	int x = 0;
	int y = 0;

	direction = NORTH;

	printf("%d\n", y);

	switch (direction)
	{
		case NORTH:
			y--; break;
		case SOUTH:
			y++; break;
		case EAST:
			x++; break;
		case WEST:
			x--; break;
	}

	printf("%d", y);


  printf("\n\n\n");
  return 0;
}
