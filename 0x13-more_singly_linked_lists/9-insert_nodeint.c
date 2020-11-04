#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the pointer to the linked list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: a new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *hold, *newnode;

	if (head == NULL)
		return (0);
	newnode = malloc(sizeof(listint_t)); /*for all cases*/
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0) /*1. add a node at the beginning of the list*/
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head; /*init temp*/
	/* 2. go through the list till idx*/
	while (temp != 0)
	{
		if (i == idx)
		{
			hold->next = newnode; /*insert*/
			newnode->next = temp; /*connect*/
			return (newnode);
		}
		hold = temp; /*pointer to a previous node*/
		temp = temp->next; /*pointer to the next node*/
		i++;
	}
	/*3. add a newnode at the end of the list*/
	if (i == idx)
	{
		temp->next = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
