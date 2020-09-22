#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - Write a function that prints the alphabet, in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
