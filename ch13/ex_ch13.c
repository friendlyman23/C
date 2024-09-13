/* Chapter 13 Programming Projects */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define STR_LEN 4

// 4.)
/*int read_line(char str[], int n);*/

// 5)
void capitalize(char arr[]);

// 6)
void censor(char *newstr, char *arr);

int main(void)
{
   printf("\n\n\n");

// 1.) 
/*   printf("%c", '\n');*/
/**/
/*//   printf("%c", "\n"); // fails because %c format spec expects char and "\n" is string literal*/
/**/
/*//   printf("%s", '\n'); // fails because %s format spec expects string literal and '\n' is char*/
/**/
/*//   printf('\n'); // fails because printf expects string as first argument*/
/**/
/*   putchar('\n'); */
/**/
/*//   putchar("\n"); // fails because putchar expects char as arg and "\n" is string literal*/
/**/
/*//   puts('\n'); // fails because puts expects str as arg and '\n' is char*/
/**/
/*   puts("\n");*/
/**/
/*   puts(""); */

// 2.)

/*   // Suppose that p has been declared as follows:*/
/**/
/*   char *p = "abc";*/
/*   // the above declares p to be a pointer; can be passed to any function expecting*/
/*   // a character array or character pointer. the pointer points to the first*/
/*   // character of the string.*/
/**/
/*   // Which of the following functions are legal? Show the output produced by each legal*/
/*   // call, and explain why the others are illegal.*/
/**/
/*   // note p = 0xf2341f8ab etc.*/
/*   // note *p = value at that address*/
/**/
/*//   putchar(p); // fails because putchar expects a char, not address*/
/**/
/*   putchar(*p);*/
/**/
/*   puts(p); */
/**/
/*//   puts(*p); // fails because puts expects pointer*/
/**/

// 3.)

   // Suppose that we call scanf as follows:

/*   int i, j;*/
/*   char s[100];*/
/**/
/*   scanf("%d%s%d", &i, s, &j);*/
/**/
/*//   If the user enters 12abc34 56def78, what will be the values of i, s and j after the call?*/
/*//   Assume that i and j are int variables and s is an array of characters.*/
/**/
/*//   i = 12; s = abc34; j=56 */
/**/
/*   printf("i = %d\n\ns = %s\n\nj = %d", i, s, j);*/

// 4.)

   // Modify the read_line function in each of the following ways:
   //	 a.) Have it skip white space before beginning to store input characters
   //
   //	 b.) Have it stop reading at the first white-space character.
   //	 Hint: To determine whether or not a character is white space, call the
   //	 isspace() function 
   //
   //	 c.) Have it stop reading at the first new-line character, then store 
   //	 the new-line character in the string
   //
   //	 d.) Have it leave behind characters that it doesn't have room to store

   /*char arr[STR_LEN + 1];*/
   /*char arr2[STR_LEN + 1];*/
   /**/
   /*printf("input: ");*/
   /*read_line(arr, STR_LEN);*/
   /*read_line(arr2, STR_LEN);*/
   /**/
   /*for (char *letter = arr; *letter != '\0'; letter++)*/
   /*{*/
   /*   printf("%c ", *letter);*/
   /*}*/
   /*printf("\n\n");*/
   /*for (char *letter = arr2; *letter != '\0'; letter++)*/
   /*{*/
   /*   printf("%c ", *letter);*/
   /*}*/

   // 5.)

   /*Write a function named "capitalize" that capitalizes all letters in its argument.*/

   /*The argument will be a null-terminated string containing arbitrary characters, not just letters.*/

   /*Use array subscripting to access the characters in the string.*/

   // 6.)

   /*Rewrite the capitalize function, this time using pointer arithmetic to access the characters in a string*/
   /**/
   /*char str[] = "a?B(]tEfo381-gFn";*/
   /**/
   /*capitalize(str);*/
   /**/
   /*printf("%s", str);*/

   // 7.)
   
   /*Write a function named censor that modifies a string by replacing every occurrence of foo*/
   /*by xxx. For example, the string "food fool" would become "xxxd xxxl". Make the function*/
   /*as short as possible without sacrificing clarity.*/

   char *orig_str = "food fool";

   int orig_str_len = strlen(orig_str);

   printf("orig str len: %d\n", orig_str_len);

   

   char new_str[orig_str_len] = {};

   printf("length of orig str: %ld\n", strlen(orig_str));
   printf("length of newstr: %ld\n", strlen(new_str));

   censor(new_str, orig_str);

   printf("\n\n\n");

   return 0;
}

// 6.)
void censor(char *new_str, char *orig_str)
{
   // arr is the passed string with text to censor

   char *cuss = "foo"; // the word to censor
   char censored[strlen(cuss) + 1]; // a string that will be the cussword replaced with x's
   char *d = censored; // a pointer for iterating through "censored"

   for (int i = 0; i < strlen(cuss); i++)
      *d++ = 'x'; // filling the censored string with x's

   *d = '\0'; // and adding null char to censored

   /* basic process is:
    *	 iterate through */



	 /* int stopsign = strlen(arr) - strlen(cuss); // how many letters to check*/
	 /* int count = 0; // count of checked letters*/
	 /**/
	 /* char *p = (char *) arr; // pointer to beginning of arr*/
	 /**/
	 /* while (1)*/
	 /* {*/
	 /*    if (count == stopsign) break; // make sure not past stopsign*/
	 /**/
	 /*    char dummy[strlen(cuss) + 1]; // make a dummy string to store the next three characters*/
	 /*    strncpy(dummy, p, 3); // copy the next 3 chars into dummy str*/
	 /**/
	 /*    if (!strcmp(dummy, cuss)) // compare dummy string to cuss. if equal*/
	 /*    {*/
	 /*strcat(newstr, censored); // copy the censored string into newstr*/
	 /*p += strlen(cuss); // increment the pointer the length of the cussword*/
	 /*    }*/
	 /*    else*/
	 /* {*/
	 /*strcat(newstr, (char *) p++); // if dummy != cuss, just cat *p to newstring and advance to the next character*/
	 /*    }*/
	 /**/
	 /*    count++; */
	 /* }*/
}


// 5.)
/*void capitalize(char arr[])*/
/*{*/
/*   for (int i = 0; arr[i] != 0; i++)*/
/*   {*/
/*      arr[i] = toupper(arr[i]);*/
/*   }*/
/**/
/*   return;*/
/*}*/

// 6.)
void capitalize(char arr[])
{
   for (char *p = arr; *p != 0; p++)
   {
      *p = toupper(*p);
   }

   return;
}



// 4.)
int read_line(char str[], int n)
{
   int ch, i = 0;

   while (isspace(ch = getchar()));

   str[i++] = ch; // put last-obtained char in string

   while (i <= STR_LEN) // if room in string...
   {
      ch = getchar(); // get the next char

      if (ch == '\n') // if a newline char appears
      {
	 str[i++] = ch; // store it in str 
	 break; // and stop reading chars
      }
      else if (isspace(ch)) // if non-newline whitespace appears
      {
	 break; // stop reading chars
      }
      else // otherwise, store the char
      {
	 str[i++] = ch; // add the char to str and repeat
      }
   }
      
      str[i] = '\0';
      return i;
}
      


























