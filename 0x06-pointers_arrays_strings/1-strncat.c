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
 * *_strcat - concatenates two strings dest и src
 * @dest: a string to concate
 * @src: a string to add
 *
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(src);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	return (dest);
}

