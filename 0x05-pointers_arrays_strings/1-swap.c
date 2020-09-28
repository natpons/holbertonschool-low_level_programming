#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 */
void swap_int(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
