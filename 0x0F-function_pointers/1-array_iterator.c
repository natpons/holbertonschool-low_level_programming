#include "function_pointers.h"

/**
 * array_iterator - executes a f given as a param on each element of an array
 * @array: the array of size integers
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 *Return: void
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
