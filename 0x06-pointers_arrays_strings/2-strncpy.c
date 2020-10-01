#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - Returnes the lenght of a string s
 * @s: a pointer to a string
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * *_strncpy - copies a string
 * @dest: a string destination
 * @src: a string source
 * @n: an int
 *
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len2 =  _strlen(src);

	for (i = 0; i <= len2 && i < n ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

