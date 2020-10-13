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
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * 
 * Return: a pointer to the duplicated string; NULL if str = NULL  
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int i;
	unsigned int len;

	if (str == NULL)
			return (NULL);

	len = _strlen(str);
	str2 = malloc(sizeof(char) * (len + 1));
	if (str2 == NULL)
		return (NULL);

	while(*str)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}
