#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to the linked list
 *
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t numelem = 0;

	while (h != 0)
	{
		numelem++;
		h = h->next;
	}

	return (numelem);
}
