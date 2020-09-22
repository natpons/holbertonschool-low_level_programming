#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet
 i*
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
