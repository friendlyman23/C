#include <stdio.h>

#define STR_LEN 50

char *my_strcat(char *s1, const char *s2);

int main(void)
{
   printf("\n\n\n");
   
   char dst_str[STR_LEN] = "I'm cool ";
   char src_str[STR_LEN] = "nope bro";

   printf("%s\n", dst_str);

   my_strcat(dst_str, src_str);

   printf("%s", dst_str);

   printf("\n\n\n");

   return 0;
}

// char *my_strcat(char *s1, const char *s2)
// {
//    char *p = s1;
//
//    while (*p != '\0') // search for end of the string in the destination string
//    {
//       p++; 
//    }
//    
//    // p now points to the null character 
//
//    while (*s2 != '\0')
//    {
//       *p = *s2; // first assignment overwrites the null char
//       p++; // increment to next cell in array
//       s2++; // increment to next cell in array
//    }
//
//    *p = '\0'; // put null char at end of s1
//    
//    return s1;
// }

char *my_strcat(char *s1, const char *s2)
{
   char *p = s1;

   while (*p)
   {
      p++;
   }
   while ((*p++ = *s2++))
      ;

   *p = '\0';

   return s1;
}
