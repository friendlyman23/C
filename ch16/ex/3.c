#include <stdio.h>

//b.)
struct complex
{
   double real;
   double imaginary;
};

//c.)
struct complex make_complex(double real_arg, double imaginary_arg)
{
   struct complex new_struct; 

   new_struct.real = real_arg; 
   new_struct.imaginary = imaginary_arg;

   return new_struct;
}

//d.)
struct complex add_complex(struct complex s1, struct complex s2)
{
   struct complex s3; 

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
   struct complex c1, c2;
   c1.real = 2.0d;
   c1.imaginary = 3.0d;
   c2.real = 1.0d;
   c2.imaginary = 1.0d;

   struct complex c3 = add_complex(c1, c2);
   printf("c3.real = %.3lf\n", c3.real);
   printf("c3.imaginary = %.3lf", c3.imaginary);


   printf("\n\n\n");
   return 0;
}

