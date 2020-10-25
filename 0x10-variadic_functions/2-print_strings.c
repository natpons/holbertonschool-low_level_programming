#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*creation a type variable in the func def*/
	va_list valist;
	unsigned int i;
	/*pointer to the char string*/
	char *result;

	/*initialize valist for n number of arguments*/
	va_start(valist, n);

	/*access all the arguments assigned to valist*/
	for (i = 0; i < n; i++)
	{
		/*casting the valist, the value*/
		result = va_arg(valist, char *);
		if (result == NULL)
			printf("(nil)");
		printf("%s", result);

		if ((separator != 0) && (i < n - 1))
			printf("%s", separator);
	}
	/*clean memory reserved for valist*/
	va_end(valist);

	printf("\n");
}
