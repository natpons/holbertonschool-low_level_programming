#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - Write a program that prints Holberton, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char c[] = "Holberton";
	int a = 0;

	while (a < 9)
	{
		_putchar(c[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
