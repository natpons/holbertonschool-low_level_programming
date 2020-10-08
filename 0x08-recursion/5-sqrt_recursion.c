#include "holberton.h"
#include <stdio.h>

/**
 * _sqrt_helper - calcule the i
 * @i: number to square
 * @n: number to take squared root
 *
 * Return: i
 */

int _sqrt_helper(int i, int n)
{
	if (i * i == n)
		return (i);

	if ((i >= n) || (i * i > n))
		return (-1);

	return (_sqrt_helper(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(0, n));
}
