#include "holberton.h"

/**
* flip_bits - returns the number of bits you would need to
* flip to get from one number to another.
* @n: integer n
* @m: number to flip n to
*
* Return: number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value, bits = 0;

	value = n ^ m;

	while (value > 0)
	{
		bits = bits + (value & 1);
		value = value >> 1;
	}

	return (bits);

}
