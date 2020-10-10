#include "holberton.h"
#include <stdio.h>

/**
  * main - prints the number of arguments passed into it + \n
  * @argc: argument count
  * @argv: argument values
  *
  * Return: always 0
  */

int main(int argc, char __attribute__((unused))*argv[])
{
		printf("%d\n", argc - 1);
			return (0);
}

