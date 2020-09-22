#include <stdio.h>
#include "holberton.h"

/**
*print_last_digit - Prints tha last digit of a number
*@a: an int
*
*Return: the last digit of a number
*/

int print_last_digit(int a)
{
	if (a > 0)
	{
	b = a % 10;
	}
else
{
	b = -(a % 10);
}
_putchar(b + '0');
}

