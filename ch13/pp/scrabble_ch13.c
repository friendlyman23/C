#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 50

int compute_scrabble_value(const char *word);

int main(void)
{
   printf("\n\n\n");

   char word[MAX_LENGTH + 1];

   printf("Enter a word: ");
   scanf("%s", word);

   printf("Scrabble value: %d", compute_scrabble_value(word));

   printf("\n\n\n");

   return 0;
}

int compute_scrabble_value(const char *word)
{
   int sum = 0;

   int scores[] = {  
		     ['A'] = 1, ['E'] = 1, ['I'] = 1, ['L'] = 1, ['N'] = 1, 
		     ['O'] = 1, ['R'] = 1, ['S'] = 1, ['T'] = 1, ['U'] = 1,

		     ['D'] = 2, ['G'] = 2,

		     ['B'] = 3, ['C'] = 3, ['M'] = 3, ['P'] = 3,

		     ['F'] = 4, ['H'] = 4, ['V'] = 4, ['W'] = 4, ['Y'] = 4,

		     ['K'] = 5,

		     ['J'] = 8, ['X'] = 8,

		     ['Q'] = 10, ['Z'] = 10
		  };
   
   // iterate through the passed-in word
   char *ch = word;

   while (*ch)
   {
      sum += scores[toupper(*ch++)];
   }

   return sum;

}
