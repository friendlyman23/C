#include <stdio.h>

#define N 10

void quicksort(int a[], int l_p, int r_p);
int split(int a[], int l_p, int r_p);


int main(void)
{
   printf("\n");
   printf("\n");
   printf("\n");

   int a[] = {9, 7, 3, 1000000, 2, 69, 420, 0, 9999, 8};
   int i; 

   quicksort(a, 0, N - 1);

   printf("sorted: ");
   for (i = 0; i < N; i++)
      printf("%d " , a[i]);
   printf("\n");






   printf("\n");
   printf("\n");
   printf("\n");



   return 0;
}

void quicksort(int a[], int l_p, int r_p)
{
   int middle;

   if (l_p >= r_p) return;
   middle = split(a, l_p, r_p);
   quicksort(a, l_p, middle - 1);
   quicksort(a, middle + 1, r_p);

}

int split(int a[], int l_p, int r_p)
{
   int part_element = a[l_p];
   
   for (;;) {
      while (l_p < r_p && part_element <= a[r_p])
         r_p--;
      if (l_p >= r_p) break;
      a[l_p++] = a[r_p];

      while (l_p < r_p && part_element >= a[l_p])
         l_p++;
      if (l_p >= r_p) break;
      a[r_p--] = a[l_p];
   }

   a[r_p] = part_element;
   return r_p;
   }















