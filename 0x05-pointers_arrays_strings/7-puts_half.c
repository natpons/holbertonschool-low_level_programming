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
 * puts_half - Prints the second half of the string, fnl
 * @str: a string
 */

void puts_half(char *str)
{
	int i, len, half;

	len = _strlen(str);

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
