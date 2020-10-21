#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function to callback
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	f(name);
}
