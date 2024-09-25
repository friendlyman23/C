#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define STR_LEN 20

int main(void)
{
   printf("\n\n\n");

   char smallest[STR_LEN + 1];
   char largest[STR_LEN + 1];
   char hopper[STR_LEN + 1];

   static bool largest_flag = false;
   static bool smallest_flag = false;

   printf("Enter word: ");

   fgets(hopper, STR_LEN, stdin);

   strcpy(largest, hopper);
   strcpy(smallest, hopper);
   

   while (strlen(hopper) - 1 != 4)
   {
      if (strcmp(hopper, largest) > 0)
      {
	 largest_flag = true;
	 strcpy(largest, hopper);
      }
      if (strcmp(hopper, smallest) < 0)
      {
	 smallest_flag = true;
	 strcpy(smallest, hopper);
      }

      printf("Enter word: ");
      fgets(hopper, STR_LEN, stdin);
   }

   if (largest_flag)
      printf("largest word: %s\n", largest);
   if (smallest_flag)
      printf("smallest word: %s", smallest);

   printf("\n\n\n");
   return 0;
}
