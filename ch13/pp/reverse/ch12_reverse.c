#include <stdio.h>
#include <assert.h>


#define MSG_SIZE 100

/* using int index */

// int main(void)
// {
//    printf("\n\n");
//
//    char msg[MSG_SIZE + 1];
//    char ch;
//    int i = 0;
//
//    printf("Enter a message: ");
//    ch = getchar();
//    while ((ch != '\n') && (i <= MSG_SIZE))
//    {
//       msg[i++] = ch;
//       ch = getchar();
//    } 
//
//    if (i == MSG_SIZE)
//    {
//	 printf("Overflow\n\n");
//	 return 0;
//    }
//
//    msg[i--] = '\0';
//
//    printf("Reversal is: ");
//    for (; i >= 0; i--)
//    {
//       putchar(msg[i]);
//    }
//
//    printf("\n\n");
//
//    return 0; 
// }

/* using pointer */

int main(void)
{
   printf("\n\n");

   char msg[MSG_SIZE + 1];
   char *p = msg;
   char *q = msg;

   printf("Enter a message: ");
   fgets(msg, MSG_SIZE, stdin);

   while (*q != '\0')
   {
      q++;
   }

   q--;

   char temp;
   while (p != q)
   {
      temp = *p;
      *p = *q;
      *q = temp;
      p++;
      q--;
   }

   printf("%s", msg);

   printf("\n\n");

   return 0; 
}
