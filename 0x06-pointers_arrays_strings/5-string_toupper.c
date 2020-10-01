#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _islower - Checks for uppercase character
 * @c: a char
 *
 * Return: 1 if c is uppercase, o otherwise
 */

int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: a string of letters
 *
 * Return: a string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (_islower(str[i]))
			str[i] -= 32;
			i++;
	}
	return (str);
}
