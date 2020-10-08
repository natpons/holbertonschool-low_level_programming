#include "holberton.h"
#include <stdio.h>

/**
 * helper - return 1 if n is not divisible by any number
 * @n: a number to check
 * @i: range of numbers between 2...n-1
 *
 * Return: 1 success, 0 error
 */

int helper(int i, int n)
{
	if (i < 1)
		return (0);

	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (helper(i - 1, n));

}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: a number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (helper(n - 1, n));
}

