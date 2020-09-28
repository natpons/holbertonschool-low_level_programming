#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a variable is a pointer to a int type
 * @b: a variable is a pointer to a int type
 *
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
