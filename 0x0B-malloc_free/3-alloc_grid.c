#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: dimension of an array of pointers
 * @height: dimension of an array of strings it points
 *
 * Return: NULL on failure, if w or h is 0.
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ar[j]);
			free(ar);
			return (0);
		}

		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
