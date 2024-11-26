#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 50

char *reverse_name(char *name);

int main(void)
{
   char name[MAX_LEN + 1] = "Lloyd Fosdick";

   reverse_name(name);


   printf("%s", name);

   printf("\n\n\n");



   return 0;
}

// Lloyd Fosdick

char *reverse_name(char *name)
{
   char copy[MAX_LEN + 1]; // initialize a new character array of size MAX_LEN
   strncpy(copy, name, MAX_LEN); // copy name into the new character array

   char *copy_ptr = copy; // make a pointer for copy array we can move around
   char *name_ptr = name; // make a pointer for name array we can move around

   while (*copy_ptr == ' ') // skip preceding whitespace
   {
      copy_ptr++;
   }

   char first = *copy_ptr; // store first letter of first name

   while (*copy_ptr++ != ' ') // skip rest of first name. after loop terminates *copy_ptr points at first letter of last name
      ;

   while ((*name_ptr = *copy_ptr)) // start overwriting *name so that last name comes first
   {
      name_ptr++;
      copy_ptr++;
   }
   
   char *comma_space = ", "; 
   copy_ptr = comma_space; 

   while ((*name_ptr = *copy_ptr)) // add the comma and the space
   {
      name_ptr++;
      copy_ptr++;
   }

   *name_ptr = first; // remember "first" is a char so no * operator needed. append first letter of last name on to "Fosdick, "
   *(++name_ptr) = '.';  // add period
   *(++name_ptr) = '\0'; // and null char

   return name;

}
