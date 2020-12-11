#include "lists.h"

/**
 * free_dlistint - frees a doubly listint_t list
 * @head: a pointer to the doubly linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *hold;

	if (head == NULL)
		return;

	ptr = head;

	while (ptr != NULL)
	{
		/*before deleting the node we store the adress of the next*/
		hold = ptr->next;
		/*delete the node*/
		free(ptr);
		/*ptr will points to the next node*/
		ptr = hold;
	}

}
