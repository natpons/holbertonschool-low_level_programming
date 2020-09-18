#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Display the alphabet letters without q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q') && (c != 'e'))
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
