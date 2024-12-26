#include <stdio.h>
#include <stdbool.h>

struct fraction
{
   int numerator;
   int denominator;
};

int get_gcd(int m, int n)
{
   int temp;

   while (1)
   {
      if (n == 0)
      {
	 break;
      }

      temp = n;
      n = m % n;
      m = temp;
   }

   return m;
}

struct fraction reduce(struct fraction f)
{
   int gcd;

   gcd = get_gcd(f.numerator, f.denominator);

   f.numerator /= gcd;
   f.denominator /= gcd;

   return f;

}

struct fraction add(struct fraction f1, struct fraction f2)
{
   struct fraction ans;
   int common_denom = f1.denominator * f2.denominator;
   bool common_denom_flag = false;

   if (f1.denominator != f2.denominator)
   {
      common_denom_flag = true;

      int f1_factor = common_denom / f1.denominator;
      f1.numerator *= f1_factor; 
      f1.denominator *= f1_factor; 

      int f2_factor = common_denom / f2.denominator;
      f2.numerator *= f2_factor; 
      f2.denominator *= f2_factor; 
   }
   
   ans.numerator = f1.numerator + f2.numerator;

   if (common_denom_flag)
   {
      ans.denominator = common_denom;
   }
   else
   {
      ans.denominator = f1.denominator;
   }

   ans = reduce(ans);

   return ans;

}

int main(void)
{

   printf("\n\n\n");
   
   //a.
   /*struct fraction f = {22, 99};*/
   /*f = reduce(f);*/
   /*printf(" %d\n---\n% d\n", f.numerator, f.denominator);*/


   //b.
   struct fraction f1 = {1, 3};
   struct fraction f2 = {2, 3};
   struct fraction add_result = add(f1, f2);

   printf(" %d\n---\n% d\n", add_result.numerator, add_result.denominator);














   printf("\n\n\n");
   return 0;
}
