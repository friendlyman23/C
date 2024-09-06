#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[10];
    int i;

    // Initialize the array to 0
    for (i = 0; i < 10; i++) {
        array[i] = 0;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Replace each element with a randomly generated signed integer
    for (i = 0; i < 10; i++) {
        array[i] = (rand() % 201) - 100; // Random number between -100 and 100
    }

    // Print the array to verify the results
    for (i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
