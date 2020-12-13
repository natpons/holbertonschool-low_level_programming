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
	unsigned int i = 0;
	dlistint_t *temp, *hold, *newnode;

	if (head == NULL)
		return (0);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)/*Add at the beginning*/
	{
		newnode->next = NULL;
		*head = newnode;
		return (*head);
	}
	temp = *head;
	while (temp != 0)/*Through the list till idx*/
	{
		if (i == idx)
		{
			hold->next = newnode;
			newnode->prev = hold;
			newnode->next = temp;
			return (newnode);
		}
		hold = temp; /*pointer to a previous node*/
		temp = temp->next; /*pointer to the next node*/
		i++;
	}
	if (i == idx)/*at the end*/
	{
		temp->next = newnode;
		newnode->next = NULL;
		newnode->prev = temp;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
