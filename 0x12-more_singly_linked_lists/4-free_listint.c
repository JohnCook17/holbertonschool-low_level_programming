#include "lists.h"

/**
 * free_listint - frees linked list from memory
 * @head: start of linked list to free
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
