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

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: a pointer to the pointer to list_t
 * @str: a ponter to a char
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
