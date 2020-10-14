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
	int len = 0;

	if (s == 0)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * *str_concat - concatenates two strings
 * which contains a copy of the string given as a parameter.
 * @s1: string
 * @s2: string
 *
 * Return: a pointer to a memory s1,s2, \0
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	char *s;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	s = malloc(sizeof(char) * (len1 + len2 + 1));

			if (s == NULL)
				return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (i = 0; i < len2; i++)
	s[i + len1] = s2[i];

	s[len1 + len2] = '\0';
	return (s);
}
