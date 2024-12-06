#include "f1.h"
#include "f2.h"

void sup(void)
{
   printf("sup\n");
}

void cool(void)
{
   sup();
   printf("\n");
   printf("I'm cool bro\n");
   not();
}
