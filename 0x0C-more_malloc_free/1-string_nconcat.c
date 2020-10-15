#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * *string_nconcat - concatenates two strings
 * @s1: a string to concate
 * @s2: a string to add
 * @n: number of bytes of s2
 *
 * Return: a pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	unsigned int i;
	char *strnew;

	strnew = malloc(sizeof(char) * (len1 + n + 1));

	if (strnew == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		strnew[i] = s1[i];

	if (n < len2)
	{
		for (i = 0; i < n; i++)
			strnew[len1 + i] = s2[i];

		strnew[len1 + n] = '\0';
		return (strnew);
	}
	else
	{
		for (i = 0; i < len2; i++)
			strnew[len1 + i] = s2[i];
		strnew[len1 + n] = '\0';
		return (strnew);
	}

}
