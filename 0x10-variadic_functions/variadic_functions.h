#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct op
{
	char *op;
	void (*f)(va_list);
} type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
