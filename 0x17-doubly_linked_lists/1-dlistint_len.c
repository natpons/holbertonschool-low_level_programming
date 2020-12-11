#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: a pointer to the doubly linked list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numelem = 0;

	while (h != 0)
	{
		numelem++;
		h = h->next;
	}

	return (numelem);
}
