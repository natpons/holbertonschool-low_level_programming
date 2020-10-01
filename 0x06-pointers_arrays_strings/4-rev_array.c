#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: is the number of elements of the array
 * @a: an array of integer
 *
 */

void reverse_array(int *a, int n)
{
	int i, t;
	int j = 0;

	for (i = n - 1; i >= j; i--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		j = j + 1;

	}
}
