#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of elements of size
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the first element
 * for which the cmp function does not return 0
 * if no element matches, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/*conditions*/
	if (size <= 0)
		return (-1);
	if (array == 0 || cmp == 0)
		return (-1);

	/*comparison tha values*/
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
