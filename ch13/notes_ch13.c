#include <stdio.h>

int main(void)
{

    // printf("\n\n\n");
    
    /********************* 13.1 String Literals*******************/
    
    /*Continuing string literals*/

        // printf("When you come to a fork in the road, take it.     \
        // --Yogi Berra");

        // printf("When you come to a fork in the road, take it.   "
        //         "--Yogi Berra");
//
	 // the compiler will always concatenate strings separated by whitespace.

    /*How string literals are stored*/

        // When compiler encounters a string literal of length n in a program
        // it sets aside n + 1 bytes of memory for the string
        // which contains the characters in the string, plus the null character:

        // e.g. "abc" is stored as [a] [b] [c] [\0]

        // empty string literals are stored as a single null character

        // compiler treats string literals as pointer of type char *.
        // printf, scanf expect char * as first argument

    /*Operations on string literals*/

        // can use string literal wherever compiler expects a char *p, e.g.:

        // char *p;
        //
        // p = "abc"
        // this does not copy the characters in "abc"!!!!
        // instead it just makes p point to the first character of the string

        // remember we can subscript pointers:
        // char digit_to_hex_char(int digit)
        // {
        //      return "0123456789ABCDEF"[digit];
        // }

        // cannot modify string literals:
        //  char *p = "abc";
        //  *p = 'd'; <--- WRONG

    /*String literals vs. character constants*/

        // Not the same.

        // The string literal "a" is represented by a pointer to a memory location
        // that contains the character a, followed by a null character

        // meainwhile, the character constant 'a' is represented by an int that is the 
        // numerical code for the character.

        // DO NOT MIX, e.g.:
        // printf('\n'); <--- WRONG
        // this is wrong because printf expects a pointer as its first argument,
        // which '\n' is not

    /*********************** 13.2 String Variables ***********************/

    /*Overview*/

        // There is no string type;
        // Any 1-D array of charaters can be used to store a string.

        // idiom for declaring a string:
        
            // #define STR_LEN 80
            // ...
            // char str[STR_LEN+1];

        // An array of STR_LEN+1 can be used to store anything from an empty 
        // string to strings of length STR_LEN.

        // i.e., the length of the string depends on  the position of the 
        // terminating null character.
        
    /*Initializing a string variable*/

        // A string variable can be initialized at the same time it's declared:

        //     char date1[8] = "June 14";
        
        // The compiler will put the characters from "June 14" in the date1 array,
        // then add a null character so that date1 can be used as a string:

        //     date1 [J][u][n][e][ ][1][4][\0]

        // The above is not actually a string literal; C views it as an array
        // initializer. The declaration could have been written like this:

        //     char date1[8] = {'J', 'u', 'n', 'e', ' ', '1', '4', '\0'};

        // If the initializer is too short to fill the array, the compiler adds
        // extra null characters:

        //     char date2[9] = "June 14";

        //     date2 [J][u][n][e][ ][1][4][\0][\0]
                
        // (Similarly to how the compiler will fill unused space with zeroes if necessary 
        // after a normal array is initialized.)

        // Initializers cannot be longer than the string variable.

        // But they can be exactly the same length, in which case the null character
        // is not added, making the array unusable as a string:

        //     char date3[7] = "June 14";

        //     date3 [J][u][n][e][ ][1][4]

        // also the declaration may also omit the string's length and allow the
        // compiler to compute it, avoiding posssibility of human error:

        //     char date4[] = "June 14";

    /*Character arrays vs. character pointers*/

	   /*   Either can be used as a string; any function expecting to be passed a*/
	   /*   character array or character pointer will accept either version*/
	   /*   as an argument:*/
	   /**/
	   /*(Character array)*/
	   /*char date[] = "June 14";*/
	   /**/
	   /*(Character pointer)*/
	   /*char *date = "June 14";*/
	   /**/
	   /*   But they are not interchangeable:*/
	   /**/
	   /*A character array allows the stored characters to be modified, like the*/
	   /*elements of any array.*/
	   /*The pointer version points to a string literal, which cannot be*/
	   /*modified.*/
	   /**/
	   /*In the array version, date is an array name.*/
	   /*In the pointer version, date is a variable that can be made to point to*/
	   /*other strings during program execution.*/
	   /**/
	   /*   i.e., if program needs a string that can be modified, we must set up an*/
	   /*   array of characters in which to store the string.*/
	   /**/
	   /*   Note the declaration*/
	   /**/
	   /*char *p; (set aside enough memory to store the address of a character, label it "p")*/
	   /**/
	   /*   Tells the compiler to set aside enough memory for a pointer variable, not*/
	   /*   a string. To use the variable as a string, we have to make it point at an*/
	   /*   array of characters first:*/
	   /**/
	   /* char str[STR_LEN+1], *p; (set aside 81 bytes of memory, label it*/
	   /* "str"; set aside enough memory to store the address of a */
	   /* character, label it "p")*/
	   /**/
	   /* p = str; */
	   /**/
	   /*  Cannot use uninitialized pointer variable as a string because we don't*/
	   /*  know where it's pointing:*/
	   /**/
	   /* char *p;*/
	   /**/
	   /* p[0] = 'a';	   <--- WRONG*/
	   /**/

   /*********************** 13.3 Reading and Writing Strings ***********************/

   /* Writing strings using printf and puts */

      /*char str[] = "Are we having fun yet?"*/
      /**/
      /*printf("%s\n", str);*/
      /**/
      /*Outputs:*/
      /**/
      /*   Are we having fun yet?*/
      /**/
      /*printf writes characters in a string one-by-one until it encounters a null character;*/
      /*if it's missing, it just keeps going until it encounters a null someowhere in memory!!*/
      /**/
      /*Print part of a string:*/
      /**/
      /*   printf("%.6s\n", str);*/
      /**/
      /*   Are we*/
      /*   123456*/
      /**/
      /*Can also use %ms conversion to display string in a field of size m*/
      /**/
      /*if there is space left over, string is right-justified. Can also use*/
      /*- to left-justify; use %m.ps, etc.*/
      /**/
      /*Or can use*/
      /**/
      /*   puts(str);*/
      /**/
      /*Which takes only the string to be printed as an argument and always adds*/
      /*a newline after.*/

   /* Reading strings using scanf and gets */
	 /**/
	 /*    The %s conversion specification allows scanf to read a string into a character array:*/
	 /**/
	 /*scanf("%s", str); (note no need for & operator because str is an array)*/
	 /**/
	 /*    scanf skips whitespace when it is called, reads characters and stores them*/
	 /*    in str, then stops when it encounters whitespace. */
	 /**/
	 /*    scanf always stores a null character at the end of the string.*/
	 /**/
	 /*    A string read in by scanf will never contain white space, so it cannot capture*/
	 /*    tabs or spaces. To capture an entire line, use gets()*/
	 /**/
	 /*    gets does not skip whitespace at the start*/
	 /**/
	 /*    gets reads n' stores until it meets a newline character. it discards it,*/
	 /*    then adds a null character to the string*/
	 /**/
	 /*    scanf vs gets:*/
	 /**/
	 /*char sentence[SENT_LEN+1];*/
	 /**/
	 /*printf("Enter a sentence:\n");*/
	 /*scanf("%s", sentence);*/
	 /**/
	 /*    If the user enters:*/
	 /**/
	 /*To C, or not to C: that is the question. (the first character is a tab)*/
	 /**/
	 /*    scanf will only store "To."*/
	 /**/
	 /*    If we call gets:*/
	 /**/
	 /*gets(sentence);*/
	 /**/
	 /*    It will store this:*/
	 /**/
	 /*"  To C, or not to C: that is the question."*/
	 /**/
	 /*    Make scanf safer by using the conversion specification %ns:*/
	 /**/
	 /*scanf("%10s");*/
	 /**/
	 /*    To ensure it does not store more than 10 characters.*/
	 /**/
	 /*    Safter alternative to gets is fgets().*/

   /* Reading strings character by character */
      
//      Factors to consider when writing custom input function:
//
//	 Should it skip whitespace

//	 What is the termination character: \n, any whitespace, etc.

//	 Should the termination character be stored in the string or discarded?

//	 If the input string is too long to store, should the function
//	 discard the extra characters or leave them for the next call?

//      Code for a function that doesn't skip whitespace, stops at first newline,
//      discards that newline, and discards extra characters:

//	 int read_line(char str[], int n)
	 {
//	    int ch, i = 0; // ch is an int because getchar returns int value of char it reads

//	    while ((ch = getchar() != '\n'))
//	    {
//	       if (i < n)
//	       {
//		  str[i++] = ch;
//	       }
//	    }
//	    str[i] = '\0'; // terminates string
//	    return i; // num of character stored
//	 }
      
   /*********************** 13.4 Accessing the characters in a string ***********************/

	 /* Overview*/
	 /**/
	 /* Loop using array subscripting to access the characters in an array*/
	 /* (this function counts number of spaces in a string):*/
	 /**/
	 /*    int count_spaces(const char s[])*/
	 /*    {*/
	 /*int count = 0, i;*/
	 /**/
	 /*for (i = 0; s[i] != '\0'; i++)*/
	 /*   if (s[i] == ' ')*/
	 /*      count++;*/
	 /*return count;*/
	 /*    }*/
	 /**/
	 /*    const included to indicate that the function does not change the array*/
	 /*    that s represents*/
	 /**/
	 /*    if s were not a string, the function would need a second argument*/
	 /*    specifying the length of the array. but strings can use the null char.*/
	 /**/
	 /* Rewrite of count_spaces() that uses a pointer instead of subscript:*/
	 /**/
	 /*    int count_spaces(const char *s)*/
	 /*    {*/
	 /*int count = 0;*/
	 /**/
	 /*for (; *s != '\0'; s++)*/
	 /*   if (*s == ' ')*/
	 /*      count++;*/
	 /*return count;*/
	 /*    }*/
	 /**/
	 /*    recall that C is pass by value, not reference. */
	 /**/
	 /*    const does NOT prevent the function from modifying the pointer s.*/
	 /*    it prevents the function from modifying what s points to*/
	 /*    (an array of characters).*/
	 /**/
	 /*    since s is a copy of the pointer that's passed to count_spaces,*/
	 /*    incrementing it inside the function does not affect the original*/
	 /*    pointer.*/
	 /**/
	 /*    advice for string functions:*/
	 /**/
	 /*- C programmers "lean toward using pointer operations [over*/
	 /*array subscripting] for processing strings"*/
	 /**/
	 /*- there is no difference in declaring a string parameter*/
	 /*as an array over a pointer -- the compiler treats an array*/
	 /*parameter as though it had been declared as a pointer*/
	 /**/
	 /*- the form of the parameter (s[] or *s) has no effect*/
	 /*on what can be supplied as an argument. count_spaces*/
	 /*can't tell the difference between an array name, a pointer*/
	 /*variable or a string literal.*/

   /*********************** 13.5 Using the C string library ***********************/

   // C's operators are "essentially useless" for working with strings
      //
   // They are treated as arrays and are restricted in the same way (can't
   // be copied or compared with operators"
      //
   // The following will fail:
      /*char str1[10], str2[10];*/
      /**/
      /*str1 = "abc"; <-- WRONG*/
      /*str2 = str1; <-- WRONG*/

   // (Using an array name as the left operand of = is illegal)

   // But = can be used to initialize an array:
      //
      // char str1[10] = "abc"; (= is not considered to be an assigment operator
      //			 during a declaration)
      //

   // Using relational and equality operators on strings compares them as pointers.
   // It does not compare their contents.
      //
      /*if (str1 == str2) ... <-- WRONG*/
      /**/
      /*since str1 and str2 have different addresses, the above expression*/
      /*produces the value 0.*/

   // Watchouts for <string.h>
      //
      // Most functions require at least one string as an argument
      //
      // String parameters are declared to have type char *,
      //    allowing the argument to be a character array, a variable
      //    of type char *, or a string literal
      //
      // Some string parameters aren't declared const, and may be modified
      // when the function is called, so string literal shouldn't be
      // used as an argument.
      //
   // (Assume str1 and str2 are character arrays used as strings for all examples)

      // strcopy (String Copy) Function
      //
	 // char *strcopy(char *s1, const char *s2);
	    //
	    // We say "strcopy copies the string pointed to by s2 into the
	    // array pointed to by s1"
	       
	    // stcopy copies characters from s2 to s1 up to and including
	    // the first null char in s2.

	    // strcopy returns s1, a pointer to the destination string
      
	 // Must use strcopy because we can't use the assignment operator
	 // to copy strings:
	    //
	    // str2 = "abcd"; <-- WRONG because str2 is an array name
	    //			 and can't appear on the left side of an assigment
      //
	 // So do this instead:
      
	       strcpy(str2, "abcd");

	 // Or copy a string variable's value:
      
	       strcpy(str1, str2); <-- str1 now contains "abcd"

	 // Use the return value of strcpy to chain together calls:

	       strcpy(str1, strcpy(str2, "abcd")); // combines above two examples
      
	 // Note that strcpy(str1, str2) cannot check that the string pointed to
	 // by str2 can actually fit in the array pointed to by str1.

	 // If str1 points to an array of length n,

	 // and str2 points to a string that has no more than n-1 characters,

	 // then the copy will succeed. But if str2 points to a longer string,

	 // undefined behavior will occur.

	 // strcpy always copies up to the first null character, so it will 
	 // continue copying past the end of the array that str1 points to.
      

       strncpy(str1, str2, sizeof(str1));

	 slower but has a third argument that limits the number of 
	 characters that will be copied

	 strncpy can still leave the string in str1 without a
	 terminating null char if the length of the string stored
	 in str2 is greater than or equal to the size of the str1
	 array. how to address this:
      //
       strncpy(str1, str2, sizeof(str1) - 1);
       str1[sizeof(str1) - 1] = '\0';
	 
   /*strlen (String Length function)*/

	 size_t (strlen(const char *s);

      size_t, which is defined in the C library, is a typedef name that
      represents one of C's unsigned int types. Not important unless
      dealing with extremely long strings.

      strlen returns the length of string s, not including null char:

	 int len;

	 len = strlen("abc");	 // len is now 3
	 len = strlen("");	 // len is now 0
	 strcpy(str1, "abc");
	 len = strlen(str1);	 // len is now 3

      note the last example shows that strlen doesn't measure the length
      of the array itself, but the length of the string stored there
      
   /*strcat (String Concatenation) function*/

      char *strcat (char *s1, const char *s2);

      appends the contents of the string s2 to the end of the string s1.

	 it returns a pointer to s1 (the resulting string).

	 examples:

	    strcpy(str1, "abc");
	    strcpy(str2, "def");
	    strcat(str1, str2);  /* str1 now contains "abcdef" */
	    
	 like strcpy, the returned value from strcpy is usually discarded but
	 can be used:

	    strcpy(str1, "abc");
	    strcpy(str2, "def");
	    strcat(str1, strcat(str2, "ghi"));
	     // str1 now contains "abcdefghi", str2 now contains "defghi" 

	 also like strcpy, must make sure destination array is long enough:

	    char str1[6] = "abc";

	    strcat(str1, "def");  //<-- WRONG; the null character will be written
				  //     in memory past the end of the array

	 strncat is a safer but slower version with a third argument indicating
	 the number of characters to be copied from the destination string. 
	 call it like this to ensure null char is always placed:

	    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1)

	 on the third argument, sizeof(str1) - strlen(str1) - 1:

	         sizeof(str1): amount of memory allocated for str1 array 

	         strlen(str1): amount of memory consumed by the the string 
	          already stored there (if any)

	         sizeof(str1) - strlen(str1): amount of space left in the array
	    		     for storing more characters

	    -1: reduce the number of characters to be copied by one,
	          ensuring room for the null char


	    this ensures that the call will copy exactly as many characters into
	    str1 that can fit before the null character.

   /* The strcmp (String Comparison) Function */

      int strcmp(const char *s1, const char *s2);

      compares strings s1 and s2, returning a value less than, equal to or greater
      than zero, depending on whether s1 is less than, equal to or greater than s2

	 if (strcmp(str1, str2) < 0)	  // is str1 < str2?

	 if (strcmp(str1, str2) >= 0)	  // is str1 >= str2?

      strcmp considers s1 to be less than s2 if either condition is true:

	    The first i characters of s1 and s2 match, but the (i + 1)st character
	    of s1 is less than the (i + 1)st character of s2:
	       
		  "abc" is less than "bcd"

		  "abd" is less than "abe"

		   All characters of s1 match s2, but s1 is shorter than s2:

		  "abc" is less than "abcd"


	     Note important properties of character codes when using strcmp.

	     e.g., for ASCII

	    The characters is each of the sequences A-Z, a-z and 0-9
	    have consecutive codes

	    All upper-case letters are less than all lower-case letters.
	    (In ASCII, codes between 65 and 90 are upper-case letters;
	    codes between 97 and 122 are lowercase)

	    Digits are less than letters (codes between 48 and 57
	    represent digits.

	    Spaces are less than all printing characters (in ASCII space
	    has the value 32)


   /*********************** 13.6 String Idioms ***********************/
      
      /*Rewriting the strlen and strcat functions with C string idioms (see*/
      /*str_idioms.c in ch13 folder)*/

   /*********************** 13.7 Arrays of Strings ***********************/

      When storing an array of strings, using a 2D array of characters,
      then storing the strings in the array, one per row, will cause C to
      pad extra space in the array with null characters:

	 char planets[][8] = {"Mercury", "Venus", "Earth", // note first array dimension
			      "Mars", "Jupiter", "Saturn", // does not need length declared
			      "Uranus", "Neptune", "Pluto"}; // because can be inferred from 
							    // count of initializer elements
							    // but second dimension len 
							    // cannot be inferred


	 Producing an array that looks like this:

	   0     1     2     3     4     5     6     7    
	0[ M ] [ e ] [ r ] [ c ] [ u ] [ r ] [ y ] [\0 ]   
	1[ V ] [ e ] [ n ] [ u ] [ s ] [\0 ] [\0 ] [\0 ]
	2[ E ] [ a ] [ r ] [ t ] [ h ] [\0 ] [\0 ] [\0 ]
	3[ M ] [ a ] [ r ] [ s ] [\0 ] [\0 ] [\0 ] [\0 ]   
	4[ J ] [ u ] [ p ] [ i ] [ t ] [ e ] [ r ] [\0 ]   
	5[ S ] [ a ] [ t ] [ u ] [ r ] [ n ] [\0 ] [\0 ]  
	6[ U ] [ r ] [ a ] [ n ] [ u ] [ s ] [\0 ] [\0 ]   
	7[ N ] [ e ] [ p ] [ t ] [ u ] [ n ] [ e ] [\0 ]   
	8[ P ] [ l ] [ u ] [ t ] [ o ] [\0 ] [\0 ] [\0 ]  

	 which wastes space.

      A RAGGED ARRAY allows rows in a 2d array to have different lengths.
      There is no C type for this but one can be created via an
      array whose elements are pointers to strings:

	 char *planets[] = {"Mercury", "Venus", "Earth", 
                            "Mars", "Jupiter", "Saturn", 
                            "Uranus", "Neptune", "Pluto"}; 
	 
	 Causes the strings to be stored like this:

	 planets
	0[ptr] --> [ M ] [ e ] [ r ] [ c ] [ u ] [ r ] [ y ] [\0 ]   
	1[ptr] --> [ V ] [ e ] [ n ] [ u ] [ s ] [\0 ]	 
	2[ptr] --> [ E ] [ a ] [ r ] [ t ] [ h ] [\0 ]       
	3[ptr] --> [ M ] [ a ] [ r ] [ s ] [\0 ] 
	4[ptr] --> [ J ] [ u ] [ p ] [ i ] [ t ] [ e ] [ r ] [\0 ]   	 	       
	5[ptr] --> [ S ] [ a ] [ t ] [ u ] [ r ] [ n ] [\0 ] 
	6[ptr] --> [ U ] [ r ] [ a ] [ n ] [ u ] [ s ] [\0 ] 
	7[ptr] --> [ N ] [ e ] [ p ] [ t ] [ u ] [ n ] [ e ] [\0 ]   
	8[ptr] --> [ P ] [ l ] [ u ] [ t ] [ o ] [\0 ] 
      
      The planet strings can now be accessed by subscripting the planets array.

      e.g., loop to search for strings beginning with the letter M:

      for (i = 0; i < 9; i++)
      {
	 if (planets[i][0] == 'M')
	 {
	   printf("%s begins with M\n", planets[i]);
	 {
      }

   // Command line arguments
   

	 
	 
   printf("\n\n\n");


    return 0;
}
