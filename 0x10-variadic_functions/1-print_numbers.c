#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*creation a type variable in the func def*/
	va_list valist;
	unsigned int i;

	/*initialize valist for n number of arguments*/
	va_start(valist, n);

	/*access all the arguments assigned to valist*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));
		if ((separator != 0) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");

	/*clean memory reserved for valist*/
	va_end(valist);
}
