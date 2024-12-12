#include <stdio.h>

// 16.1 Structure variables -- How to declare and perform basic operations
// 16.2 Structure types -- can write functions that accept struct arguments or return structs
// 16.3 How arrays and structs can be nested
// 16.4 Unions
// 16.5 Enumerations
#define NAME_LEN 25

// 16.2 Structure Types: Structures as Arguments and Return Values
struct part
{
   int number;
   char name[NAME_LEN+1];
   int on_hand;
};

void print_part(struct part p)
{
   printf("Part number: %d\n", p.number);
   printf("Part name: %s\n", p.name);
   printf("Quantity on hand: %d\n", p.on_hand);
}


int main(void)
{
   printf("\n\n\n");

   struct part part1 = {.number = 58, .name = "Pizza time", .on_hand = 3};

   print_part(part1);




   printf("\n\n\n");
   return 0;
}

