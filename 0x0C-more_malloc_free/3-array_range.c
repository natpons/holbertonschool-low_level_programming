#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array of integers
 * @min: an integer
 * @max: an integer
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(max - min + 1);

	if (array == NULL)
		return (NULL);

	for (i = min; i < max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
