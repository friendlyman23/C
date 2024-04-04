#include <stdio.h>
#define INCHES_PER_POUND 166
#define HEIGHT 0
#define LENGTH 0
#define WIDTH 0

int main(void)
{

    int volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &HEIGHT);
    printf("Ente27r length of box: ");
    scanf("%d", &LENGTH);
    printf("Enter width of box: ");
    scanf("%d", &WIDTH);

    volume = HEIGHT * LENGTH * WIDTH;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}