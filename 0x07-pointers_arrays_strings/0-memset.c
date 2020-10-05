#include "holberton.h"

/**
 * char *_memset - fills the first n bytes pointed to by s
 * with the constant byte b
 * @s: a pointer of n bytes
 * @b: a constant byte
 * @n: first n bytes of the memory area
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
