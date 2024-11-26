#include <stdio.h>
#include <ctype.h>

int main(void)
{
   printf("\n\n\n");

   int sum = 0;

   printf("Enter a word: ");
   char ch;

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


   while ((ch = getchar()) != '\n')
   {
      char upper = toupper(ch);
      sum += scores[upper];
   }

   printf("Scrabble value: %d", sum);



   printf("\n\n\n");

   return 0;
}
