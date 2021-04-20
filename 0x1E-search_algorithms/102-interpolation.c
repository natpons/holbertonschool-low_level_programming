#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - f searches for a value in a sorted array of int
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL :-1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array != NULL && size > 0)
	{
		low = 0;
		high = size - 1;
		while (low <= high)
		{
			pos = low + (((double)(high - low) /
						(array[high] - array[low])) * (value - array[low]));
			if (pos < low || pos > high)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (value == array[pos])
				return (pos);
			if (value < array[pos])
				high = pos - 1;
			else
				low = pos + 1;
		}
	}
	return (-1);
}
