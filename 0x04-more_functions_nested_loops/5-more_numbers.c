#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int n = 0;

	for (i = 0; i < 10; i++)
	{
	for (n = 0; n <=14; n++)
	{
		if (n >= 10)
			_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
