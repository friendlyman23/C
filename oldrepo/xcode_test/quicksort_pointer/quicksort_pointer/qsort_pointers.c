#include <stdio.h>

# define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
   printf("\n\n\n");

   int a[N];

   printf("Enter %d numbers to be sorted ", N);

   for (int *p = a; p < a + N; p++)
	scanf("%d", p);

   quicksort(a, 0, N - 1);

   // return p to start of array

   printf("In sorted order: ");
   for (int *p = a; p < a + N; p++)
      printf("%d ", *p);

   printf("\n\n\n");

   return 0;
}

void quicksort(int a[], int low, int high)
{
   int middle;

   if (low >= high) return;
   middle = split(a, low, high);
   quicksort(a, low, middle - 1);
   quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
   int part_element = a[low]; // part_element points at first elem in list

   for (;;) {
      while (low < high && part_element <= a[high]) 
	high--; // move high to left until it finds an int smaller than partitioning element (this int will be moved)

      if (low >= high) break; // ensure high has not moved to left of low 
      
      a[low++] = a[high]; // move the value pointed at by high to be at the place pointed at by low, then increment low pointer
      
      while (low < high && a[low] <= part_element)
	low++;
      if (low >= high) break;
      a[high--] = a[low];
   }

   a[high] = part_element;
   return high;
}




