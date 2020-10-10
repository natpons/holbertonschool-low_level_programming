#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: argument count
  * @argv: argument values
  *
  * Return: print Error - if does not receive two arguments + \n + return 1
  */

int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 0;

	if (argc > 1)
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
