#include <stdio.h>

int main(void)
{
   printf("\n\n\n");

   // a.)
   /*struct*/
   /*{*/
   /*   double real;*/
   /*   double imaginary;*/
   /*} c1, c2, c3;*/

   // b.)
   struct
   {
      double real;
      double imaginary;
   }
   c1 = {0.0d, 1.0d},
   c2 = {1.0d, 0.0d},
   c3;

   /*printf("c1.real = %lf (should be 0.0)\nc1.imaginary = %lf(should be 1.0)\n\n", c1.real, c1.imaginary);*/
   /*printf("c2.real = %lf (should be 1.0)\nc2.imaginary = %lf(should be 0.0)", c2.real, c2.imaginary);*/


   printf("\n\n\n");

   // c.)
   /*c1 = c2;*/
   /**/
   /*printf("c1.real = %lf (should be 1.0)\nc1.imaginary = %lf(should be 0.0)\n\n", c1.real, c1.imaginary);*/
   /*printf("c2.real = %lf (should be 1.0)\nc2.imaginary = %lf(should be 0.0)", c2.real, c2.imaginary);*/

   // d.)

   c3.real = c1.real + c2.real;
   c3.imaginary = c1.imaginary + c2.imaginary;
   printf("c3.real = %lf (should be 1.0)\nc3.imaginary = %lf(should be 1.0)", c3.real, c3.imaginary);
   


   printf("\n\n\n");
   return 0;
}

