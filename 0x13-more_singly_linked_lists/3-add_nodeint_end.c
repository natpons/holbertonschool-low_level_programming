#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to the pointer to the linked list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	/*a new pointer temp which position we will advance to the last node*/
	listint_t *temp;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;

	/*if my linked list is empty*/
	if (*head == NULL)
	{
		*head = endnode;
		endnode->next = NULL;
	}
	else
	{
		temp = *head;
		/*go through the chain of nodes to the last node*/
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = endnode;
		endnode->next = NULL;
	}

	return (endnode);
}
