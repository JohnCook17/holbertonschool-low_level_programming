#include "lists.h"

/**
 * free_listint2 - frees a linked list, and sets the head to null
 * @head: start of linked list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
