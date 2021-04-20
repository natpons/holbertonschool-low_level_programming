#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * algorithm : Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL :-1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int index;
/*const char *str = "Value checked array[%i] = [%i]\n";*/

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
/*		puts(str);*/
		printf("Value checked array[%i] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
