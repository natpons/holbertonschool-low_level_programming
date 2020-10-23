#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	va_start (valist, n);

	if (n == 0)
		return (0);
	
	for (i = 0; i < n; i++)
	{
		sum += va_arg (valist, const unsigned int);
	}
	va_end (valist);
	return sum;
}
