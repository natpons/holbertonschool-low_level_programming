#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a pointer to the pointer to the linked list
 * @n: an integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = NULL;

	return (newnode);
}
