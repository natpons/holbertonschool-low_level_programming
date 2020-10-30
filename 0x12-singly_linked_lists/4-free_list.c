#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: a pointer to the first element
 *
 */
void free_list(list_t *head)
{
	list_t *ptr, *hold;

	ptr = head;

	while (ptr != NULL)
	{
		hold = ptr->next;
		free(ptr);
		ptr = hold;
	}
}
