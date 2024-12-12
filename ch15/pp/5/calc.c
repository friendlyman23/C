#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include "stack.h"

/* external variables */
int stack[STACK_SIZE];
int stack_pointer = 0;

int main(void)
{
   printf("\n\n\n");
   char expr[EXPR_SIZE + 1];
   printf("Enter an RPN expression: ");
   fgets(expr, EXPR_SIZE, stdin);
   while (isdigit(expr[0]))
   {
      int result = evaluate_rpn_expression(expr);
      printf("Value of expression: %d\n\n", result);
      make_empty();
      printf("Enter an RPN expression: ");
      fgets(expr, EXPR_SIZE, stdin);
      printf("\n\n");

   }

   printf("goodbye dude\n\n");
}





























