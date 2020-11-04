#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: a pointer to a pointer the  head of the linked list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *current;

	temp = *head;
	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
