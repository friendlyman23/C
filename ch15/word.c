#include <stdio.h>
#include "word.h"

int read_char(void)
{
   int ch = getchar();

   if (ch == '\n' || ch == '\t')
   {
      return ' ';
   }
   return ch;
}

void read_word(char *word, int len)
{
   int ch, pos = 0;

   while ((ch = read_char()) == ' ') // skip over initial spaces
      ;
   while (ch != ' ' && ch != EOF) // read until encounter space or EOF.
   {				 // if we encounter a space we've reached the end of the word
      if (pos < len) // store characters in word until reaching len limit
      {
	 word[pos++] = ch;
      }
      ch = read_char(); // read next char
   }
   word[pos] = '\0'; // make it a string
}








