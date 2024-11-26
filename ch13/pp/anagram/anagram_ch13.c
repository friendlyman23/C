#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LEN 26

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{

   printf("\n\n\n");
   
   char *word1;
   char *word2;

   printf("Enter first word: ");
   fgets(word1, MAX_LEN, stdin);

   printf("Enter second word: ");
   fgets(word2, MAX_LEN, stdin);

   printf("The words are%s anagrams", are_anagrams(word1, word2) ? " " : " not");

   printf("\n\n\n");

   return 0;


}

bool are_anagrams(const char *word1, const char *word2)
{

   int *ch = word1;

   while ((ch = getchar()) != '\n')
   {
      if (isalpha(ch))
      {
	 ch = toupper(ch) - 'A';
	 word[ch]++;
      }
   }

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
	 return false;
      }
   }

   return true;

}
