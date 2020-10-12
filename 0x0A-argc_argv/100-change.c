#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument values
 *
 * Return: numbers of arguments != 1, print Error + \n + return 1
 * number < 0 : print 0 + \n
 */

int main(int argc, char *argv[])
{
	int total;
	int i, num = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total < 0)
	{
		printf("0\n");
		return (0);
	}

	while (total != 0)
	{
		num = num + (total / coins[i]);
		total = total % coins[i];
		i++;
	}
	printf("%d\n", num);
	return (0);
}
