#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @size: a size of a matrix
 * @a: a matrix of ints
 *
 * Return: the sum of the two diagonals
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * (size + 1)];
	}

	for (j = 1; j <= size; j++)
	{
		sum2 = sum2 + a[j * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
