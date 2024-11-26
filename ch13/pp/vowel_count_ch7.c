#include <stdio.h>
#include <ctype.h>

int main(void)
{
   printf("\n\n\n");

   printf("Enter a sentence: ");

   char* vowels = "aeiou";
   char ch;
   int vowel_count = 0;

   while ((ch = getchar()) != '\n')
   {
      for (char *p = vowels; *p;)
      {
	 if (tolower(ch) == *p++)
	 {
	    vowel_count++;
	    break;

	 }
      }
   }

   printf("Number of vowels: %d", vowel_count);



   printf("\n\n\n");
   return 0;
}
