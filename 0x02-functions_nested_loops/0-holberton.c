#include<stdio.h>
#include<string.h>
#include"holberton.h"

/**
 * main - Write a program that prints Holberton, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char c[] = "Holberton\n";
	unsigned int a = 0;
	while (a < strlen(c))
	{
		_putchar(c[a]);
		a++;
	}
	return (0);
}
