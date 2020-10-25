#include "variadic_functions.h"

/**
 * op_c - prints a character
 * @ap: char to print
 */
void op_c(va_list ap)
{
	/*va_arg to access the item*/
	int res = va_arg(ap, int);

	printf("%c", res);
}

/**
 * op_i - prints an integer
 * @ap: int to print
 */
void op_i(va_list ap)
{
	int res = va_arg(ap, int);

	printf("%d", res);
}

/**
 * op_f - prints a float
 * @ap: float to print
 */
void op_f(va_list ap)
{
	double res = va_arg(ap, double);

	printf("%f", res);
}

/**
 * op_cp - prints a char string
 * @ap: the char string to print
 */
void op_cp(va_list ap)
{
	char *res = va_arg(ap, char *);

	if (res == NULL)
		res = "nil";
	printf("%s", res);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	/*creation a type variable in the func def*/
	va_list ap;

	int i = 0;
	int j;
	char *sep = "";

	type ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_cp},
		{NULL, NULL}
	};

	/*initialize va_list for number of arguments*/
	va_start(ap, format);

	/*while input char string*/
	while (format && format[i])
	{
		j = 0;
		/*while ops chars*/
		while (j < 4)
		{
			if (format[i] == *(ops[j].op))
			{
				printf("%s", sep);
				sep = ", ";
				ops[j].f(ap);
			}
		j++;
		}
	i++;
	}

	/*clean memory reserved for valist*/
	printf("\n");
	va_end(ap);
}
