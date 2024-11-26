#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 26

int main(void)
{

   printf("\n\n\n");

   int word[MAX_LEN + 1] = {0};
   int ch;

   printf("Enter first word: ");

   while ((ch = getchar()) != '\n')
   {
      if (isalpha(ch))
      {
	 ch = toupper(ch) - 'A';
	 word[ch]++;
      }
   }

   printf("Enter second word: ");

   while ((ch = getchar()) != '\n')
   {
      if (isalpha(ch))
      {
	 ch = toupper(ch) - 'A';
	 word[ch]--;
      }
   }
   
   for (int i = 0; i < MAX_LEN - 1; i++)
   {
      if (word[i] != 0)
      {
	 printf("\nThe words are not anagrams.");
	 printf("\n\n\n");
	 return 0;
      }
   }

   printf("\nThe words are anagrams");

   printf("\n\n\n");

   return 0;


}
