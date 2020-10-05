#include "holberton.h"

/**
 * char *_strchr - locates a character in a string
 *
 * @s: a string
 * @c: a character (byte)
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}

	}
	return (s);
}
