#include <stdio.h>
#include "holberton"

/**
*_print_sign - Function that prints the sign of a number
*@n: a number
*
*Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
*/

int _print_sign(int n)
	{
	if (n > 0)
	{
	return (1);
	_putchar('+');
}

	if (n == 0)
	{
	return (0);
	_putchar('0');
}
:
	if (n < 0)
	{
	return ('-1');
	_putchar('-');
}
}
