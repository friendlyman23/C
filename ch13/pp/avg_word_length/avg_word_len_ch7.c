#include <stdio.h>

int main(void)
{
   printf("\n\n\n");

   printf("Enter a sentence: ");
   int word_count = 0;
   int letter_count = 0;
   char ch;

   while ((ch = getchar()) != '\n')
   {
      if (ch == ' ')
      {
	 word_count++;
      }
      else letter_count++;
   }

   word_count++;

   printf("word_count: %d\n\n", word_count);
   printf("letter_count: %d\n\n", letter_count);

   printf("Avg word length: %.1f", (float) letter_count / word_count);

   printf("\n\n\n");

   return 0;
}
