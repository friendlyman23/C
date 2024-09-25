/* Chapter 13 Programming Projects */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define STR_LEN 99

// 4.)
/*int read_line(char str[], int n);*/

// 5)
void capitalize(char arr[]);

// 6)
void censor(char *newstr, const char *arr);

// 10)
// char *duplicate(const char *p);

// 11)

int my_strcmp(char *s, char *t);

// 12)
void get_extension(const char *file_name, char *extension);

void build_index_url(const char *domain, char *index_url);

int f(char *s, char *t);

int count_spaces(const char *s);

bool test_extension(const char *file_name, const char *extension);

void remove_filename(char *url);

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

   // 5a.)

   /*Write a function named "capitalize" that capitalizes all letters in its argument.*/

   /*The argument will be a null-terminated string containing arbitrary characters, not just letters.*/

   /*Use array subscripting to access the characters in the string.*/

   // 5b.)

   /*Rewrite the capitalize function, this time using pointer arithmetic to access the characters in a string*/
   /**/
   /*char str[] = "a?B(]tEfo381-gFn";*/
   /**/
   /*capitalize(str);*/
   /**/
   /*printf("%s", str);*/

   // 6.)
   
   /*Write a function named censor that modifies a string by replacing every occurrence of foo*/
   /*by xxx. For example, the string "food fool" would become "xxxd xxxl". Make the function*/
   /*as short as possible without sacrificing clarity.*/

   // char the_string[] = "food fool";
   // char *cuss = "foo";
   //
   // censor(the_string, cuss);
   //
   // printf("%s", the_string);

   // 7.)

   /* Suppose that str is an array of characters. Which one of the following
    * is not equivalent to the other three? */ 

   // Answer: strcat

   // char str[50] = "food fool";
   //
   // printf("%s\n\n", str);
   //
   // // *str = 0;
   // // str[0] = '\0';
   // // strcpy(str, "");
   // strcat(str, "");
   //
   // printf("%s", str);
   // 

   // 8.)

   /* what will be the value of *
    * the string str after the following statements have been executed? */

   // char str[100] = "Yo wassup muthafuckka!!!!!!!!!!!!!!";
   // char str2[100];
   //
   // strcpy(str, "tire-bouchon");
   // strcpy(&str[4], "d-or-wi");
   // strcat(str, "red?");
   //
   // printf("%s\n\n", str);

   // 9.)

   /* What will be the value of the string 
    * s1 after the following statements have been executed? */

   // char s1[STR_LEN + 1];
   // char s2[STR_LEN + 1];
   //
   // strcpy(s1, "computer");
   // strcpy(s2, "science");
   // if (strcmp(s1, s2) < 0)
   //    strcat (s1, s2);
   // else
   //    strcat (s2, s1);
   // s1[strlen(s1)-6] = '\0';
   //
   // printf("%s", s1);

   // 10.)

   /* The following function supposedly creates an identical copy of a string.
    * What's wrong with the function? */

   // char *str = "shut up";
   //
   // char *str2 = duplicate(str);

   // 11.)

   // Write a version of the strcmp function from K&R that uses pointer arithmetic
   // instead of array subscripting (see page 306)

   // char *str1 = "shut up";   
   // char *str2 = "shut up idiot";   
   //
   // printf("%d", my_strcmp(str1, str2));
   
   // 12.) 
   /* Write the following function:
    * void get_extension(const *char file_name, *char extension);
    *
    * file_name points to a string containing a file name. The function
    * should store the extension on the file name in the string pointed 
    * to by extension. For example, if the file name is "memo.txt", 
    * the function will store "txt" in the string pointed to by extension.
    * If the file name doesn't have an extension, the function should store
    * an empty string (a single null character) in the string pointed to by 
    * extension. Keep the functiona s simple as possible by having it use
    * the strlen and strcpy functions.) */

   // char *file_name = "shut_up_idiot";
   // char extension[STR_LEN + 1];
   //
   // get_extension(file_name, extension);
   //
   // printf("%s", extension);

   // 13)
   /* Write the following function:
    * 
    * void build_index_url(const char *domain, char *index_url);
    *
    * domain points to a string containing an internet domain, 
    * such as "knking.com". the function should add "http://www." 
    * to the beginning of this string and "/index.html" to the 
    * end of the string, storing the result in the string pointed 
    * to by index_url. (in this example, the result will be
    * "http://www.knking.com/index.html".) You may assume that
    * index_url points to a variable that is long enough to hold 
    * the resulting string. keep the function as simple as possible 
    * by having it use the strcat and strcpy functions. */

   // char *domain = "knking.com";
   // char index_url[STR_LEN + 1];
   //
   // build_index_url(domain, index_url);
   //
   // printf("%s", index_url);

   // 14)
   /* What does the following program print? */

   // char s[] = "Hsjodi", *p; // declare array of chars "Hsjodi" and char pointer
   //
   // for (p = s; *p; p++) // set p equal to first char of s ('H') as 
			// // iteration variable; test if it's nonzero;
   //    --*p;		// d
   //
   // puts(s);		// it changes the string to "Grinch"?????
			// // you m otherfucker..

   // 15)

   // printf("%d\n", f("abcd", "babc"));
   // printf("%d\n", f("abcd", "bcd"));

   // 16)

   /* condense count_spaces using techniques of section 13.6 */
      
   // printf("%d", count_spaces("Hello I am very cool bro"));

   // 17)

   /* write the following function:
    *
    * bool test_extension(const char *file_name, const char *extension);
    *
    * file_name points to a string containing a file name. The function should 
    * return true if the file's extension matches the string pointed to by extension,
    * ignoring the case of letters. For example, the call test_extension("memo.txt", "TXT")
    * would return true. Incorporate the "search for the end of a string" idiom into
    * your function. Hint: use the toupper function to convert characters to upper-case
    * before comparing them. */

   // printf("%s", test_extension("memo.txt", "TXT") ? "true" : "false");

   // 18)

   /* Write the following function:
    *
    * void remove_filename(char *url);
    *
    * url points to a string containing a URL (uniform resource locator) that ends with a file name
    * (such as "http://www.knking.com/index.html"). The function should modify the string by
    * removing the file name and the preceding slash. (in this example, the result will
    * be "http://www.knking.com".) Incorporate the "search for the end of a string" idiom
    * into your function. Hint: Have the function replace the last slash in the string
    * by a null character. */


   char url[] = "http://www.knking.com/index.html";

   remove_filename(url);

   printf("%s", url);
   
    
   
    




   
   




   printf("\n\n\n");

   return 0;
}
// 18)

void remove_filename(char *url)
{
   char *p = url;

   while (*url)
   {
      if (*url == '/')
	 p = url;
      url++;
   }

   *p = '\0';
   return;
}

// 17)
bool test_extension(const char *file_name, const char *extension)
{
   while (*file_name++ != '.')
      ;
   
   while (*file_name)
   {
      if (toupper(*file_name++) != *extension++)
	 return false;
   }

   return true;
}





// 16)

int count_spaces(const char *s) // new version
{
   int count = 0;

   while (*s)
   {
      if (*s++ == ' ')
	 count++;
   }

   return count;
}

// int count_spaces(const char *s) // original version
// {
//    int count = 0;
//
//    for (; *s != '\0'; s++)
//    {
//       if (*s == ' ')
// 	 count++;
//    }
//    
//    return count;
// }

// 15)
// (this function returns the index of the first character in s that is not also in t)

int f(char *s, char *t)
{
   char *p1, *p2;

   for (p1 = s; *p1; p1++) 
   {
      for (p2 = t; *p2; p2++) 
      {
	 if (*p1 == *p2) break; 
      }

      if (*p2 == '\0') break;

   }

   return p1 - s; 
}


// 13
void build_index_url(const char *domain, char *index_url)
{
   strcpy(index_url, "http://www."); 
   strcat(index_url, domain);
   strcat(index_url, "/index.html");
}

// 12
// void get_extension(const char *file_name, char *extension)
// {
//    while (*file_name++)
//    {
//       if (*file_name++ == '.')
//       {
// 	 strcpy(extension, file_name);
// 	 return;
//       }
//    }
//    *extension = '\0';
//    return;
// }
//

void get_extension(const char *file_name, char *extension) // this version uses array subscripting while above verison uses ptr arithmetic
{
   int file_name_len = strlen(file_name);

   for (int i = 0; i < file_name_len; i++)
   {
      if (file_name[i] == '.')
      {
	 strcpy(extension, &file_name[++i]);
	 return;
      }
   }
   *extension = '\0';
}


// 11)
int my_strcmp(char *s, char *t)
{
   for (; *s == *t; s++, t++)
   {
      if (*s == '\0')
	 return 0;
   }
   return *s - *t;
}


// K&R version
// int my_strcmp(char *s, char *t)
// {
//    int i;
//
//    for (i = 0; s[i] == t[i]; i++)
//       if (s[i] == '\0')
// 	 return 0; // the only way we execute this is if s[i] and t[i] are equal
//    return s[i] - t[i]; // if s is less for any reason (e.g., is shorter), we return via this statement
// } 
//




// 10.)
char *duplicate(const char *p)
{
   char *q;

   strcpy(q, p);
   return q;
}


// 6.)
// void censor(char *the_string, const char *cuss)
// {
//    int stopsign = strlen(the_string) - strlen(cuss); // which index of the string to not go past
//    int i = 0; // variable i keeps track of where we are in the array as we move from left to right
//
//    while (1) 
//    {
//       if (i >= stopsign) break; // if we go past stopsign, break
//
//       bool censor_flag = true; // flag that is raised if a sequence of chars needs to be censored
//       char *letter_ptr = the_string + i; // the variable i keeps track of what letter we're on as we iterate L-R
// 					  // on each iteration, letter_ptr is initialized to the_string[i], 
// 					  // then we move it to the right to check the characters that follow the_string[i]
// 					  // to see if they need to be censored
//
//       char *cuss_ptr = cuss; // a pointer to the first char of cuss;
//
//       for (int j = 0; j < strlen(cuss); j++) // for the length of cuss, check if the letter matches the letter at the same index in cuss
//       {
// 	 if (*letter_ptr++ != *cuss_ptr++)
// 	 {
// 	    censor_flag = false;
// 	    break;
// 	 }
//       }
//
//       if (censor_flag)
//       {
// 	 letter_ptr = the_string + i;
// 	 for (int j = 0; j < strlen(cuss); j++)
// 	 {
// 	    *letter_ptr++ = 'x';
// 	 }
//
// 	 i += strlen(cuss);
//       }
//       else
//       {
// 	 i++;
//       }
//
//    }
// 	 
// }
//
   



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
      


























