#include <stdio.h>
#include "quicksort.h"

int split(int a[], int low, int high)
{
   int part_element = a[low];

   for (;;)
   {
      while (low < high && a[high] > part_element)
      {
	 high--;
      }
      if (low >= high)
      {
	 break;
      }
      a[low++] = a[high];

      while (low < high && a[low] < part_element)
      {
	 low++;
      }
      if (low >= high)
      {
	 break;
      }
      a[high--] = a[low];

   }

   a[high] = part_element;
   return high;
}

void quicksort(int a[], int low, int high)
{
   int middle;
   if (low >= high)
   {
      return;
   }

   middle = split(a, low, high);

   quicksort(a, low, middle-1);
   quicksort(a, middle+1, high);
}

void print_array(int arr[], int size)
{

   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }

   printf("\n\n");
}

