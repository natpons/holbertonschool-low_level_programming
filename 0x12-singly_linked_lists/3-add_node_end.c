#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: a variable is a pointer to a char type
 *
 * Return: Always 0
 */
int _strlen(const char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}
/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head of list
 * @str: string to add to node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode;
	/*a new pointer temp which position we will advance to the last node*/
	list_t *temp;

	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);
	endnode->str = strdup(str);
	endnode->len = _strlen(str);

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
