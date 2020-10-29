#include "lists.h"

/**
 * list_len - produces the number of elements
 *
 * @h:a pointer to the list_t
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t numelem;

	while (h != 0)
	{
		numelem++;
		h = h->next;
	}

	return (numelem);
}
