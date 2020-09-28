#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: a variable is a pointer to a char type
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;

	return (len);
}
