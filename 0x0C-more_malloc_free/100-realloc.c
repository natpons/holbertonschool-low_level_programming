#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - reallocates a memory block using malloc and free 
 * @ptr: is a pointer to the memory
 * @old_size: is the size, in bytes, of the allocated space for ptr 
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: a pointer to the allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	/*If new_size == old_size do not do anything and return ptr*/
	if (new_size == old_size)
		return (ptr);

	/*call malloc(new_size), for all values of old_size and new_size*/
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}

	/*If new_size zero & ptr is not NULL, then the call free(ptr), NULL*/
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
        
	/*the added memory (from 11) should not be initialized*/
	new = malloc(new_size);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*((char*)new + i) = *((char*)ptr + i);
	}

	/*copy the memory of old_size*/
	for (i = 0; i < new_size; i++)
		 *((char*)new + i) = *((char*)ptr + i);
	free(ptr);
	return (new);
}
