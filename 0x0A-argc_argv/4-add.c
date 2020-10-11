#include <stdio.h>
#include <stdlib.h>
#include "holberton.h" 
/**
 * main - adds positive numbers
 * @argc: argument count
 * @*argv: argument values
 *
 * Return: print 0 - if no number + \n
 * print "Error and return 1": if 1 of the number contains symbols are not digits
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++);
		{

		if ((argv[i][j] <: 0) || (argv[i][j] > 9))
		{
			printf("Error\n");
			return (1);
		}

		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
