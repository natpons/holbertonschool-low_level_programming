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
		/*before deleting the node we store the adress of the next*/
		hold = ptr->next;
		/*delete the node*/
		free(ptr->str);
		free(ptr);
		/*ptr will points to the next node*/
		ptr = hold;
	}
}
