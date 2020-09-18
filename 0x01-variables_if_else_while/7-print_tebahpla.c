#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Display the alphabet letters in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
