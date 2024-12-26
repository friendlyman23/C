#include <stdio.h>

//b.)
typedef struct 
{
   double real;
   double imaginary;
} Complex;

//c.)
Complex make_complex(double real_arg, double imaginary_arg)
{
   Complex new_struct; 

   new_struct.real = real_arg; 
   new_struct.imaginary = imaginary_arg;

   return new_struct;
}

//d.)
Complex add_complex(Complex s1, Complex s2)
{
   Complex s3; 

   s3.real = s1.real + s2.real;
   s3.imaginary = s1.imaginary + s2.imaginary;

   return s3;
}

int main(void)
{
   printf("\n\n\n");

   // a.)
   /*struct complex*/
   /*{*/
   /*   double real;*/
   /*   double imaginary;*/
   /*};*/

   // d.)
   Complex c1, c2;
   c1.real = 2.0d;
   c1.imaginary = 3.0d;
   c2.real = 1.0d;
   c2.imaginary = 1.0d;

   Complex c3 = add_complex(c1, c2);
   printf("c3.real = %.3lf\n", c3.real);
   printf("c3.imaginary = %.3lf", c3.imaginary);


   printf("\n\n\n");
   return 0;
}

