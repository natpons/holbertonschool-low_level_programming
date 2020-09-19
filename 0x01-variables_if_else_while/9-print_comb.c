#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i = 0;

while (i < 10)
{
	putchar(i + '0');
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	i++;
}
return (0);
}
