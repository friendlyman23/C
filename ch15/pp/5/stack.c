#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include "stack.h"

extern int stack[];
extern int stack_pointer;

void make_empty(void)
{
   stack_pointer = 0;
}

bool is_empty(void)
{
   return stack_pointer == 0;
}

bool is_full(void)
{
   return stack_pointer == STACK_SIZE;
}

void push(int num)
{
   if (is_full())
   {
      stack_overflow();
   }
   else
   {
      stack[stack_pointer++] = num;
   }
}

int pop(void)
{
   if (is_empty())
   {
      stack_underflow();
   }
   else
   {
      return stack[--stack_pointer];
   }
}

void stack_overflow()
{
   printf("Expression is too complex\n\n\n");
   exit(0);
}

void stack_underflow()
{
   printf("Not enough operands in expression\n\n\n");
   exit(0);
}

int evaluate_rpn_expression(const char *expression)
{
   // 1 2 3 * + =
   // ^

   while (*expression != '=')
   {
      if (isdigit(*expression))
      {
	 int digit_version = atoi(expression);
	 push(digit_version);
	 expression = move_ptr(expression);
      }

      else
      {
	 int operand2 = pop();
	 int operand1 = pop();
	 int eval_result;
	 switch (*expression)
	 {
	    case '+':
	       eval_result = operand1 + operand2;
	       break;

	    case '-':
	       eval_result = operand1 - operand2;
	       break;

	    case '*':
	       eval_result = operand1 * operand2;
	       break;

	    case '/':
	       eval_result = operand1 / operand2;
	       break;
	 }
	 push(eval_result);
	 expression = move_ptr(expression);
      }
   }

   return stack[--stack_pointer];
}

const char *move_ptr(const char *ptr)
{
   ptr++;
   while (*ptr == ' ')
   {
      ptr++;
   }
   return ptr;
}
