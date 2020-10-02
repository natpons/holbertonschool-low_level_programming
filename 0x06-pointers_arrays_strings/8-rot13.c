#include "holberton.h"

/**
 * char *rot13 - encodes a string using rot13
 * @str: a string the rezult
 * Return: a string
 */

char *rot13(char *str)
{
	int i = 0, m;
	char a[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (m = 0; a[m] != '\0'; m++)
		{
			if (str[i] == a[m])
			{
				str[i] = b[m];
				break;
			}
		}
		i++;
	}
	return (str);
}
