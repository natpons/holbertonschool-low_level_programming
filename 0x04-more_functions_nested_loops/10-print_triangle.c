#include "holberton.h"
/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int i, k, m;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
	{
		for (k = size - i; k > 0; k--)
		{
			_putchar(' ');
		}
		for (m = 1; m <= i; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
