#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet
 i*
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int a = 0;

	while (a <= 10)
	{
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	a++;
  }
}
