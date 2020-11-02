#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the pointer to the linked list
 *
 * Return: the head nodes data (n)
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
		return (0);

	/*hold the pointer to the head before deleting*/
	tmp = *head;
	/*we hold the value before deleting the node*/
	value = (*head)->n;
	/*change the adress of the HEAD pointer*/
	(*head) = (*head)->next;
	free(tmp);
	/*return the head nodes data*/
	return (value);
}
