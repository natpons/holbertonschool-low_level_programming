#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - returns tha value of x raised to the power of y
 * @x: a number to raise
 * @y: a number of power
 *
 * Return: if y < 0 then return -1, factorial
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
return (0);
}
