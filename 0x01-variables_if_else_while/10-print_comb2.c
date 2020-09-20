#include<stdio.h>

/**
 * main - print all numbers from 00 to 99
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	int b, c;

	while (i < 100)
	{
		b = i / 10;
		c = i % 10;

		putchar(b + '0');
		putchar(c + '0');

		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
		putchar('\n');
		return (0);
}
