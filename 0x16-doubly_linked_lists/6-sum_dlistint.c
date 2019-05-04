#include "lists.h"

/**
 * sum_dlistint - the values in a doubly linked list
 * @head: head of a doubly linked list
 *
 * Return: the sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
