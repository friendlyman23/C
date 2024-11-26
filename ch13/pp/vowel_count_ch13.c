#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 50

int compute_vowel_count(const char *sentence);

int main(void)
{
   printf("\n\n\n");

   char sent[MAX_LEN + 1];

   printf("Enter a sentence: ");
   fgets(sent, MAX_LEN, stdin);

   printf("Number of vowels: %d", compute_vowel_count(sent));



   printf("\n\n\n");
   return 0;
}

int compute_vowel_count(const char *sentence)
{
   char* vowels = "aeiou";
   int vowel_count = 0;

   while (*sentence)
   {
      for (char *p = vowels; *p;)
      {
	 if (tolower(*sentence) == *p++)
	 {
	    vowel_count++;
	    break;

	 }
      }
      sentence++;
   }

   return vowel_count;
}
