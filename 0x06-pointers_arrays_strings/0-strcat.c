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

char *_strcat(char *dest, char *src)
{
	int num = _strlen(dest);
	int i;

	for (i = 0; i <= num; i++)
		dest[num + i] = src[i];

	dest[num + i] = '\0';

	return (dest);
}
