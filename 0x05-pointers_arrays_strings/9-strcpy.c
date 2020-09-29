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
 * *_strcpy - copies the str p-ed to by src with (\0), to buf p-ed to by dest
 * @dest: a string to copy
 * @src: a string for coping
 *
 * Return value: a string
 */

char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
