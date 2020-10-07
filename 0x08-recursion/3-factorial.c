#include "holberton.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: a given number
 *
 * Return: if n < 0 then return -1, factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
