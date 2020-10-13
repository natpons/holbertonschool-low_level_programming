#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and init it with a specific char
 * @size: size of an array
 * @c: char to init
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}

	else if (size == 0)
		return (0);

	else
	return (NULL);
}
