#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 i*
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char ch;

	while (a <= 10)
	{
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	a++;
}
}
