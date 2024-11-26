#include <stdio.h>

size_t my_strlen(const char *s);

int main(void)
{
   printf("\n\n\n");

   printf("%zd", my_strlen("I am cool bro"));

   printf("\n\n\n");

   return 0;

}

// size_t my_strlen(const char *s)
// {
//    size_t n;
//
//    for (n = 0; *s != '\0'; s++)
//    {
//       n++;
//    }
//
//    return n;
// }

// size_t my_strlen(const char *s)
// {
//    size_t n = 0;
//
//    for (; *s != '\0'; s++)
//    {
//       n++;
//    }
//
//    return n;
// }

// size_t my_strlen(const char *s)
// {
//    size_t n = 0;
//
//    for (; *s; s++)
//    {
//       n++;
//    }
//
//    return n;
// }

// size_t my_strlen(const char *s)
// {
//    size_t n = 0;
//
//    for (; *s++;)
//    {
//       n++;
//    }
//
//    return n;
// }

// size_t my_strlen(const char *s)
// {
//    size_t n = 0;
//
//    while (*s++)
//    {
//       n++;
//    }
//
//    return n;
// }









