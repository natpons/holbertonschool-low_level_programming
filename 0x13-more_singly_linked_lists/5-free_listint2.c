#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the pointer to the linked list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	/*there is no linked list*/
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next; /*change the position before deleting*/
		free(*head); /*deleting a node*/
		(*head) = tmp; /*new head*/
	}
	head = NULL;
}
