#include <stdio.h>
#include "word.h"
#include "justify.h"

int read_char(void)
{
   int ch = getchar();

   if (ch == '\n' || ch == '\t')
   {
      return ' '; // interpret newlines or tabs as spaces
   }
   return ch; // return character read (could also be a space)
}

void read_word(char *word, int len)
{
   int ch, pos = 0;

   while ((ch = read_char()) == ' ') // for every word, skip initial whitespace
      ;
   while (ch != ' ' && ch != EOF) // read until encounter space or EOF.
   {				 // if we encounter a space we've reached the end of the word
      if (pos == MAX_WORD_LEN)
      {
	 word[pos++] = '*';
	 break;
      }
      word[pos++] = ch;
      ch = read_char(); // read next char
   }
   word[pos] = '\0'; // make it a string
}









