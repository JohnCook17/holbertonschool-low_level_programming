#include "lists.h"

/**
 * pop_listint - Removes a node form the start of the list, returns value
 * @head: linked list start
 *
 * Return: the value of the node being poped
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next;
	int n;

	if (head == NULL)
		return (0);
	current = *head;
	next = current->next;
	n = current->n;
	free(current);
	*head = next;
	return (n);
}
