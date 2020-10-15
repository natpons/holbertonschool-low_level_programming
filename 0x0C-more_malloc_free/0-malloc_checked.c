#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: volume of memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == 0)
		return (NULL);
	return (s);
}
