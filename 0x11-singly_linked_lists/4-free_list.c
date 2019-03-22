#include "lists.h"

/**
 * free_list - free a list_t
 * @head: address of list to free
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		free(current->str);
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
