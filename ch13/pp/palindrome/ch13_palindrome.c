#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 50

bool is_palindrome(const char *message);

int main(void)
{
   printf("\n\n\n");

   char msg[SIZE + 1];
   
   printf("Enter a message: ");
   fgets(msg, SIZE, stdin);
   printf("\n\nIs%spalindrome", is_palindrome(msg) ? " " : " not ");

   printf("\n\n\n");

   return 0;
}

bool is_palindrome(const char *message)
{
   char msg_letters[SIZE+1];
   char *p = msg_letters;

   while (*message != '\0')
   {
      if (isalpha(*message))
      {
	 *p++ = tolower(*message);
      }
      message++;

   }

   *p-- = '\0';
   char *q = p;

   p = msg_letters;

   for (; p != q; p++, q--)
   {
      if (*p != *q)
      {
	 return false;
      }
   }

   return true;

}


























// int main(void)
// {
//    printf("\n\n\n");
//
//    char msg[SIZE];
//    int i = 0;
//    char ch;
//
//    printf("Enter a message: ");
//    while ((ch = getchar()) != '\n')
//    {
//       if (isalpha(ch))
//       {
// 	 msg[i++] = tolower(ch);
//       }
//    }
//    msg[i--] = '\0';
//
//    // Helivedasadevileh
//    // helivedasadevileh
//    for (int j = 0; j != i; j++, i--)
//    {
//       if (msg[i] != msg[j])
//       {
// 	 printf("Not a palindrome");
// 	 printf("\n\n\n");
// 	 return 0;
//       }
//    }
//
//    printf("Palindrome");
//
//    printf("\n\n\n");
//
//    return 0;
// }
