#include "lists.h"

/**
 * sum_listint - Sums the values of a linked list
 * @head: the linked list to sum
 *
 * Return: the sum of the linked list, if no list then 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
