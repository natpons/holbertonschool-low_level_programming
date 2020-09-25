#include <stdio.h>
#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (n >= i)
	{
		_putchar('_');
		i++;
	}
		_putchar('\n');
	}
	else
	_putchar('\n');
}

