#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: a pointer to a pointer the  head
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *current;

	temp = *head;
	if (temp == NULL)
		return (-1);

	if (index == 0)/*first and one element*/
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
	temp->next->next->prev->prev = temp;
	free(current);
	return (1);
}
