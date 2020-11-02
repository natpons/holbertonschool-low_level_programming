#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the pointer to the linked list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *hold;

	ptr = *head;

	while (ptr != NULL)
	{
		/*before deleting the node we store the adress of the next*/
		hold = ptr->next;
		/*delete the node*/
		free(ptr);
		/*ptr will points to the next node*/
		ptr = hold;
	}
	*head = NULL;
}
