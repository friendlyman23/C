/* Finds the largest and smallest elements in an array */
#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    printf("\n\n\n");


    int b[N] = {420, 69000, 1000000, 83, 0, 89, -2, 9999, 1, 830};
    int i, big, small;

    // printf("Enter %d numbers: ", N);
    // for (i = 0; i < N; i++)
    //     scanf("%d", &b[i]);

    
    
    max_min(b, N, &big, &small);

    printf("Largest: %d\n\n", big);
    printf("Smallest: %d", small);



    printf("\n\n\n");



    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{

    *max = *min = a[0];

    for (int i = 1; i < N; i++) {
        if (a[i] > *max) *max = a[i];
        else if (a[i] < *min) *min = a[i];
    }

}