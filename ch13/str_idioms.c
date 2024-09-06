#include <stdio.h>
#include <string.h>

/****************Searching for the end of a string******************/

// This version of strlen searches its string argument to find the 
// end, using a variable to keep track of the string's length:

size_t m_strlen1(const char *s)
{
   size_t n;

   for (n = 0; *s != '\0'; s++)
   {
      n++;
   }
   return n;
}

// A condensed version that relies on the fact that the integer value
// of the null character is 0. *s != '\0' is the same as
// *s != 0, allowing us to use the abbreviated boolean test idiom

size_t m_strlen2(const char *s)
{
   size_t n = 0;

   for(; *s; s++) // *s similar to if(*s)
   {
      n++;
   }

   return n;
}

// But as seen in section 12.2, it's possible to increment s and
// test *s in the same expression:

size_t m_strlen3(const char *s)
{
   size_t n = 0;

   for(; *s++;)
   {
       n++;
   }

   return n;
}

// And we can even make it more terse by changing the for loop
// to a while loop

size_t m_strlen4(const char *s)
{
   size_t n = 0;

   while(*s++)
   {
      n++;
   }

   return n;
}

// Version that may yield a speed boost with some compilers
// because it doesn't have to increment n inside the while loop.
// *p is declared a const so the compiler doesn't warn that
// storing s in p puts the string at which s points at risk

size_t m_strlen5(const char *s)
{
   const char *p = s;

   while (*s)
   {
      s++;
   }

   return s - p;
}

// note that these two are idioms meaning "search for the null
// character at the end of the string"

/*while (*s)*/
/*{*/
/*   s++; // leaves s pointing at the null character */
/*}*/

/*while(*s++) // leaves s pointing just past the null character*/
/*   ;*/

/****************Copying a String******************/

// Starting with the strcat function.

// Straightforward but lengthy version of strcat:

char *m_strcat1(char *s1, const char *s2)
{
   char *p = s1;

   while(*p != '\0')
   {
      p++;
   }

   while(*s2 != '\0')
   {
      *p = *s2;
      p++;
      s2++;
   }

   *p = '\0';

   return s1;
}

// Condensed version:

char *m_strcat2(char *s1, const char *s2)
{
   char *p = s1;

   while(*p) // p moves through s1 until it finds null char
   {
      p++;    
   }

   while(*p++ = *s2++) // the "string copy" idiom
   {		       // the loop terminates because of the = operator:
      //	       // all chars except the null char test true, so
      //	       // all are copied. when the loop hits s2's null
      //	       // char, the expression evaluates to zero and
      //	       // the loop exits.
      ; 
   }

   *p = '\0';

   return s1;
}


int main(void)
{
   printf("\n\n\n");

   char yo[] = " nuthin much buddy!!!!";

   printf("%d", m_strlen5(yo));
   printf("\n\n\n");

   char sup[100] = "What's up my big huge time dog";

   m_strcat2(sup, yo);
   printf("%s", sup);



   












   printf("\n\n\n");

   return 0;

}
