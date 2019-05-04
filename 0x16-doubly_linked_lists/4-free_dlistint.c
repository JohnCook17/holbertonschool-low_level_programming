#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
