#include "holberton.h"

/**
 * char *leet - encodes a string into 1337
 * @str: a string the rezult
 * Return: a string
 */

char *leet(char *str)
{
	int i = 0, m;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (str[i] != '\0')
	{
		for (m = 0; a[m] != '\0'; m++)
		{
			if (str[i] == a[m])
				str[i] = b[m];
		}
		i++;
	}
	return (str);
}
