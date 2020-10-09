#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _isdigit - Checks a char for a digit from 0 through 9.
 * @c: an int
 *
 * Return: 1 if c a digit, 0 otherwise
 */

int _isdigit(int c)
	{
		if (c >= '0' && c <= '9')
		{
		return (1);
		}
		else
		{
		return (0);
		}
	}
