#include <stdio.h>

// 16.1 Structure variables -- How to declare and perform basic operations
// 16.2 Structure types -- can write functions that accept struct arguments or return structs
// 16.3 How arrays and structs can be nested
// 16.4 Unions
// 16.5 Enumerations
#define NAME_LEN 25

// 16.2 Structure Types: Structures as Arguments and Return Values
void print_part(struct part p);

struct part build_part(int number, const char *name, int on_hand);

int main(void)
{
   printf("\n\n\n");

   //16.1 Structure variables
      // Arrays have elements
      // Structs have MEMBERS

   struct
   {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
   } part1, part2;

      // Each structure represents a new scope/has a separate "name space" for its members

   struct
   {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
   } part1, part2;

   struct
   {
      char name[NAME_LEN+1];
      int number;
      char gender;
   } employee1, employee2;

      // Initializing structure variables
	 // May initialize at declaration

   struct
   {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
   }  
   part1 = {528, "Disk drive", 10}, // Values must appear in same order as when struct was declared
   part2 = {914, 5}; // Unititialized values are initialized to 0; strings become empty string
   // part 2 here is becomes this: (number = 914, name = "\U00000005", on_hand = 0)

   
      // Designated initializers
   {.number = 528, .name = "Disk drive", .on_hand = 10} // period + member name is called "designator"
  
      // Operations on Structures
   printf("Part number: %d\n", part1.number); // selecting members
   printf("Part name: %s\n", part1.name);
   printf("Quantity on hand: %d\n", part1.on_hand);

      // struct members are lvalues
   part1.number = 258;
   part1.on_hand++;

      // copies part1.number into part2.number, part1.name into part2.name, etc
   part2 = part1;

      // cannot do this:
   part1 == part2; // cannot use comparison operators

   // 16.2 Structure Types
      // Note difference between structure variable and structure type.

      // Structure tag: Identify a particular kind of structure

      // Declare a struct with structure tag:
   struct part
   {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
   };

      // Now use it to declare variables:
   struct part part1, part2; // must use struct keyword

      // or combine into one declaration
   struct part
   {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
   } part1, part2;

      // after declaring struct with structure tag, 
      // all structs declared to have type struct part are compatible:
   struct part part1 = {528, "Disk drive", 10};
   struct part part2;

   part2 = part1; // can refer to as a normal variable now that they are declared

      // Defining a structure type
   typedef struct
   {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
   } Part;

      // can now use it the same as a built-in type when declaring:
   Part part1, part2; // don't need "struct" keyword
      // compare with using a structure tag when declaring:
   struct part
   {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
   };
   struct part part1 = {528, "Disk drive", 10};
   struct part part2;

      // Structures as Arguments and Return Values

	 // function to print the members of the structure
   print_part(part1);

	 // function that returns a part structure that it constructs
	 // from arguments
   part1 = build_part(528, "Disk drive", 10);






   printf("\n\n\n");
   return 0;
}

void print_part(struct part p)
{
   printf("Part number: %d\n", p.number);
}

struct part build_part(int number, const char *name, int on_hand)
{
   struct part p;

   p.number = number;
   strcpy(p.name, name);
   p.on_hand = on_hand;

   return p;
}
