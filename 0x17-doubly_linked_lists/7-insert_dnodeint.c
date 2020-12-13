#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the pointer to the doubly linked list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: a new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	unsigned int  i = 0;
	dlistint_t *temp, *newnode;

	if (head == NULL)
		return (0);
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
	if (idx == 0)/*add at the beginning*/
	{
		newnode->next = temp;
		temp->prev = newnode;
		*head = newnode;
		return (newnode);
	}
	while (i != (idx - 1))/*Through the list till idx-1*/
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = temp->next;
	newnode->prev = temp;
	if (!temp->next)
		temp->next = newnode;
	else
	{
		temp->next->prev = newnode;
		temp->next = newnode;
	}
	return (newnode);
}
