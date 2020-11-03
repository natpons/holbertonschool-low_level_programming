#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the pointer to the linked list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: a new node
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *temp, *store_next, *new_node;

	if (head == NULL)
		return (0);


	if (idx == 0)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	idx = 1;

	while (*head != NULL)
	{
		/* go through the list till idx*/
		while (i != idx)
		{
			i++;
			temp = temp->next;
		}

		store_next = temp->next; /*to store the adr the next node*/
		temp->next = new_node; /*point to the new_node*/
		temp->n = n;
		new_node->next = store_next;
		return (temp);
	}
	return (NULL);
}
