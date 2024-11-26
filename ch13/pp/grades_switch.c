#include <stdio.h>
#include <stdlib.h>



int main(void)
{
   printf("\n\n\n");

   int num_grade;

   printf("Enter a numerical grade: ");
   scanf("%d", &num_grade);

   if (num_grade < 0 || num_grade > 100)
   {
      printf("Error: Must enter numerical grade betwen 0 and 100\n");

      exit(1);
   }
   

   int tens_grade = num_grade / 10;


   char letter_grade;


   switch (tens_grade)
   {
      case 10:	  // falling through
      case 9:	  letter_grade = 'A'; break;
      case 8:	  letter_grade = 'B'; break;
      case 7:	  letter_grade = 'C'; break;
      case 6:	  letter_grade = 'D'; break;
      case 5:	  // falling through
      case 4:	  // falling through
      case 3:	  // falling through
      case 2:	  // falling through
      case 1:	  // falling through
      case 0:	  letter_grade = 'F'; break;
   }

   printf("Letter grade: %c", letter_grade);

   printf("\n\n\n");

   return 0;
}
