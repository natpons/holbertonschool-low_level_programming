#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the pointer to the linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (head != 0)
	{
		if (n == index)
		{
			return (head);
		}
		else
		{
			n++;
			head = head->next;
		}
	}
	return (NULL);
}
