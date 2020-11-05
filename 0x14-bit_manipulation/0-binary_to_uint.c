#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, weight = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	for (; b[len] != 0; len++) /*and to calculate lenght*/
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	while (len >= 0)
	{
		len--;

		if (b[len] == '1')
			decimal = decimal + weight;

		weight = weight * 2; /*etc, 8, 4, 2, 1*/
	}
	return (decimal);
}
