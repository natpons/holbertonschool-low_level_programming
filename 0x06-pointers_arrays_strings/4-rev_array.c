#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: is the number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
}
