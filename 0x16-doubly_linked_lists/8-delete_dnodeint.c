#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head of doubly linked list
 * @index: index of node to delete
 *
 * Return: -1 if fail, 1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (i < index && current)
	{
		current = current->next;
		i++;
	}
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}
