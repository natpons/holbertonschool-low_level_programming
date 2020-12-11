#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list
 * @head: a pointer to the pointer to the linked list
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);

	while (head != 0)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
