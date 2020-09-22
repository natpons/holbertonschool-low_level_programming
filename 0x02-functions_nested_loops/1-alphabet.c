#include "holberton.h"

/**
 * main - Write a function that prints the alphabet, in lowercase.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
