#include "search_algos.h"
#include <stdio.h>
#include <math.h>
#define MAXVALUE 30

/**
 * jump_search - f-on that searches for a value in a sorted array of integers
 * algorithm : Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL :-1
 *
 * Use the square root of the size of the array as the jump step
 * Use the sqrt() function included in <math.h> ( with -lm)
 */
int jump_search(int *array, size_t size, int value)
{
	int step, i, end_i, start_i;

	if (array != NULL && size > 0)
	{
		i = 0;
		step = sqrt(size);

		for (i = 0; i < step; i++)
		{
			if (value < array[step])
				end_i = step - 1;
			else
				start_i = step + 1;
		}
		for (i = start_i; i <= end_i; i++)
		{
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
