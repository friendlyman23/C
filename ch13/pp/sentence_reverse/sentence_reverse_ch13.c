#include <stdio.h>
#include <stdbool.h>

#define MAX_WORDS 30
#define MAX_WORD_LEN 20

int read_word(char *word_arr);

int main(void)
{
   printf("\n\n\n");

   char sentence[MAX_WORDS][MAX_WORD_LEN + 1]; // store the words input by user
   int word_num = 0; // track where we are in the sentence array 
   bool term_flag = false; // when it's time to stop
   char term_char; // the terminating character

   printf("Enter a sentence: ");

   while (word_num < MAX_WORDS) // while we don't overflow the array
   {
      int word_size = read_word(sentence[word_num]); // read in the word 
      int term_chars[] = {'!', '?', '.'}; // if we read one of these time to stop
      for (int j = 0; j < sizeof term_chars / sizeof term_chars[0]; j++) // check to see if there's a term char
      {
	 if (sentence[word_num][word_size - 1] == term_chars[j]) // if so...
	 {
	    term_flag = true; // it's time to stop
	    term_char = sentence[word_num][word_size - 1]; // store the term char so we can stick it on to the end of the printed output
	    sentence[word_num][word_size - 1] = '\0'; // not sure this is needed o well...
	    break;
	 }
      }
      if (term_flag) break;
      else word_num++; // on to the next one
   }

   printf("\nIn reverse: ");
   for (int j = word_num; j >= 0; j--)  // print the sentence in reverse
   {
      printf("%s", sentence[j]);
      if (j != 0) printf("%c", ' '); // put a space after the word unless it's the last word
   }
   printf("%c", term_char); // and finally stick the term char onto the end



   printf("\n\n\n");
   
   return 0;
}

// this reads in a word character by character and stores it in the sentence array
int read_word(char *word_arr)
{
   int ch, i = 0;

   while ((ch = getchar()) != ' ')
   {
      if (ch == '\n') // if input is exhausted break
      {
	 break;
      }
      if (i < MAX_WORD_LEN) // else if there's room in the array,
      {
	 word_arr[i++] = ch; // add ch to the array
      }
   }
   word_arr[i] = '\0'; // don't forget!! overflow brother
   return i;
}
