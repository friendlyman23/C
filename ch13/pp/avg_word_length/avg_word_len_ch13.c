#include <stdio.h>
#include <assert.h>

#define MAX_LEN 50

double compute_average_word_length(const char *sentence);

int main(void)
{
   printf("\n\n\n");

   char sentence[MAX_LEN + 1];
   printf("Enter a sentence: ");

   fgets(sentence, MAX_LEN, stdin);
   printf("Average word length: %.1lf", compute_average_word_length(sentence));

   printf("\n\n\n");

   return 0;
}

double compute_average_word_length(const char *sentence)
{
   char *p = sentence;

   int word_count = 0;
   int letter_count = 0;

   while (*p != '\n')
   {
      if (*p != ' ')
      {
	 letter_count++;
      }
      else word_count++;
      p++;
   }

   word_count++;

   return (double) letter_count / word_count;

}
