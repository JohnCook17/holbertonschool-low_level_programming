#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the nth node of a linked list
 * @head: the head of the linked list
 * @index: the node to delete
 *
 * Return: 1 if success, 0 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head, *prev;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (i < index - 1 && current)
	{
		prev = current;
		current = current->next;
		i++;
	}
	prev->next = current->next;
	free(current);
	return (1);
}
