#include "holberton.h"

/**
 * char *_memcpy - copies memory area
 *
 * @n: a pointer of n bytes
 * @src: memory area from
 * @dest: memory area to
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
