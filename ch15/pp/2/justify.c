// Formats a file of text

#include <stdio.h>
#include <string.h>
#include "line.h"
#include "word.h"
#include "justify.h"

int main(void)
{
   setvbuf(stdout, NULL, _IONBF, 0); 
   char word[MAX_WORD_LEN+2];
   int word_len;
   clear_line();
 //   for (;;)
 //   {
 //      read word;
 //      if (can't read word)
 //      {
	//  write contents of line buffer without justification;
	//  terminate program;
 //      }
 //      if (word doesn't fit in line buffer)
 //      {
	// write contents of line buffer with justification;
	// clear line buffer;
 //      }
 //      add word to line buffer;
 //   }
   for (;;)
   {
      read_word(word, MAX_WORD_LEN+2);
      word_len = strlen(word); // note strlen does not count null char
      if (word_len == 0)
      {
	flush_line();
	return 0;
      }
  //     if (word_len > MAX_WORD_LEN)
  //     {
	 // word[MAX_WORD_LEN] = '*';
  //     }
      if (word_len + 1 > space_remaining())
      {
	 write_line();
	 clear_line();
      }
      add_word(word);
   }
}
