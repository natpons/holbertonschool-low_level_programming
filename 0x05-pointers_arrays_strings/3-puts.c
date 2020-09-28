#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: a variable is a pointer to a char type
 */
void _puts(char *str)
{
	int i = -1;

	while (*str++)
		_putchar (str[i]);
	_putchar('\n');
}
