#include "stdio.h"
/**
 * main - Entry point, prints the numbers from 1 to 100, followed by a new line
 * If the number is multiple of 3, print Fizz
 * If the number is multiple of 5, print Buzz
 * If the number is multiple of 3 and 5, print FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
