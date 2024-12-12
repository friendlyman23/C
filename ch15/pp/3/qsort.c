#include <stdio.h>
#include "quicksort.h"
#define N 10

int main(void)
{
   printf("\n\n\n");

   int arr[N];

   printf("Enter %d numbers to be sorted: ", N);
   for (int i = 0; i < N; i++)
   {
      scanf("%d", &arr[i]);
   }

   printf("\nOriginal array: ");
   print_array(arr, N);

   quicksort(arr, 0, N-1);

   printf("In sorted order: ");
   print_array(arr, N);


   printf("\n\n\n");
   return 0;
}

