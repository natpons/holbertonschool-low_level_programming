#include "lists.h"

/**
 * print_list - singly linked list
 *
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
