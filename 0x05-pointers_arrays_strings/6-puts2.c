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
 * puts2 - prints every other char of a string, starting with the first char
 * @str: a string
 */

void puts2(char *str)
{
	int i, len = _strlen(str);

	for (i = 0; (i = len); i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	putchar('\n');
}
