#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: starting from 0 of the bit to get
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > (sizeof(n) * 8))
		return (-1);

	value = n >> index;

	return (value & 1);
}
