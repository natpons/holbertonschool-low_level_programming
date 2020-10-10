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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
