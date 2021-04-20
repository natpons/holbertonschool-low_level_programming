#include "search_algos.h"

/**
 * print - prints current array
 * @array: array to print
 * @right: end index sub array
 * @left: start index sub array
 */

void print(int *array, unsigned int left, unsigned int right)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - f-on that searches for a value in a sorted array of integers
 * algorithm : Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located
 * If value is not present in array or if array is NULL :-1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0;
	unsigned int right = size - 1;
	unsigned int middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print(array, left, right);
		middle = left + (right - left) / 2;

		/*Check if value is present at mid*/
		if (array[middle] == value)
			return (middle);

		/*If value greater, ignore left half*/
		if (array[middle] < value)
			left = middle + 1;

		/*If value is smaller, ignore right half*/
		else
			right = middle - 1;
	}
	/*if we reach here, then element was not present*/
	return (-1);
}
