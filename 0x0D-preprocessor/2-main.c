#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from + \n.
 *
 * Return: Always 0.
 */
int main(void)
{
	/* Prints location of C this C code */
	printf("%s\n", __FILE__);
	return (0);
}
