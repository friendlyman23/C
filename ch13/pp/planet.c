// Checks planet  names

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
   char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

   int i, j;

   for (i = 1; i < argc; i++)
   {
      for (j = 0; j < NUM_PLANETS; j++)
      {
	 char *s = argv[i];
	 char *t = planets[j];
	 bool while_loop_entered = false;
	 while (toupper(*s) == toupper(*t))
	 {
	    while_loop_entered = true;
	    s++;
	    t++;
	    printf("\n\n");
	 }
	 if (while_loop_entered && *--s == '\0')
	 {
	    printf("%s is planet %d\n", argv[i], j + 1);
	    break;
	 }
      }

       if (j == NUM_PLANETS)
      {
	 printf("%s is not a planet\n", argv[i]);
      }
   }

   return 0;
}


