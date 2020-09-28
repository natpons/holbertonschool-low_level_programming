#include "holberton.h"

/**
 * _strlen - returns the length of a string
 */
int _strlen(char *s)
{
	int len;

	for (*s = 0; *s != '\0'; s++)
		len++;

	return ( len);
}
