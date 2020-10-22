#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: calc num1 operator num2
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	{
		int num1, num2, result;
		/*init the function pointer of the struct*/
		int (*callfunc)(int, int);

		/*if the number of arguments is wrong*/
		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}

		/*if tries to divide by 0*/
		if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		{
			printf("Error\n");
			exit(100);
		}

		/*to convert integers from the string input to int*/
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		/*cf + the operator is none of the above*/
		callfunc = get_op_func(argv[2]);
		if (callfunc == NULL || argv[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		result = callfunc(num1, num2);
		printf("%d\n", result);
		return (0);
	}
}
