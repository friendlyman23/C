#include <stdio.h>
#include <ctype.h>


#define SIZE 50

int main(void)
{
   printf("\n\n\n");

   char msg[SIZE];
   int i = 0;
   char ch;

   printf("Enter a message: ");
   while ((ch = getchar()) != '\n')
   {
      if (isalpha(ch))
      {
	 msg[i++] = tolower(ch);
      }
   }
   msg[i--] = '\0';

   // Helivedasadevileh
   // helivedasadevileh
   for (int j = 0; j != i; j++, i--)
   {
      if (msg[i] != msg[j])
      {
	 printf("Not a palindrome");
	 printf("\n\n\n");
	 return 0;
      }
   }

   printf("Palindrome");

   printf("\n\n\n");

   return 0;
}


// int main(void)
// {
//    char msg[SIZE];
//
//    printf("Enter a message: ");
//    fgets(msg, SIZE, stdin);
//
//    char *end = msg;
//    
//    while (*end != '\n')
//    {
//       end++;
//    }
//
//    end--;
//
//
//
//
//
//
//
//    return 0;
// }
