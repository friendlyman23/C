#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

void make_empty(void);

bool is_empty(void);

bool is_full(void);

void push(int i);

int pop(void);

void stack_overflow();

void stack_underflow();

int evaluate_rpn_expression(const char *expression);

const char *move_ptr(const char *ptr);

#define STACK_SIZE 10
#define EXPR_SIZE 100

#endif


