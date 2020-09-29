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
 * rev_string - Reverses a string, write it back in the place of the orig str
 * @str: a string
 */

void rev_string(char *str)
{
	int a = 0, z, len = _strlen(str) - 1;
	char t;

	for (z = len; z > a; z--)
	{
		t = str[z];
		str[z] = str[a];
		str[a] = t;
		a++;
	}
}
