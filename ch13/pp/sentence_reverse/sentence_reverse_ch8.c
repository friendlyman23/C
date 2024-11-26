#include <stdio.h>
#define MAX_LEN 50

int main(void)
{
   printf("\n\n\n");

   char sentence[MAX_LEN + 1];
   printf("Enter a sentence: ");
   int idx = 0; // use this later to know where the sentence terminates in the array
   char term; // the punctuation indicating end of input

   // loop thru stdin and store chars in sentence array
   for (;;)
   {
      char ch = getchar();
      if (ch == '.' || ch == '!' || ch == '?') 
      {
	 term = ch;
	 sentence[idx] = '\0'; // store null char just 2 B safe
	 break;
      }
      else
      {
	 sentence[idx++] = ch;
      }
   }

   // now print the words in reverse
   int ptr = idx; // we'll move ptr around in the array to print the chars
   for (;;)
   {
      int letter_count = 0; // keep track of how many letters the word has (letter count = length of word + 1)
      do {
	 --ptr;
	 ++letter_count;
      } while (ptr >= 0 && sentence[ptr] != ' '); // we've passed the beginning of the current word to print

      int marker = ptr; // mark the space between words
      int i = 0; // keep track of how many letters we've printed

      while (1)
      {
	++ptr;
	++i;
	if (i < letter_count) // print chars as long as i is less than letter_count
	{
	   printf("%c", sentence[ptr]);
	}
	else break;
      }

      if (sentence[marker] == ' ') // if marker points at a space there are more words to print
      {
	 printf("%c", sentence[marker]);
	 ptr = marker;
      }
      else break; // if not we have printed all the words
   }
   printf("%c", term); // print the terminating character

   printf("\n\n\n");
   
   return 0;
}
