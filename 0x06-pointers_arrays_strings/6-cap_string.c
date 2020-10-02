#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: a string
 *
 * Return: a string str
 */

char *cap_string(char *str)
{
	int i = 1;
	int n = i - 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[n] == ' ' || str[n] == '\t' || str[n] == '\n' ||
			    str[n] == ',' || str[n] == ';' || str[n] == '.' ||
			    str[n] == '!' || str[n] == '?' || str[n] == '"' ||
			    str[n] == '(' || str[n] == ')' || str[n] == '{' ||
			    str[n] == '}')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
