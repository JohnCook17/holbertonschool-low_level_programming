#include "lists.h"

/**
 * dlistint_len - finds the length of the doubly linked list.
 * @h: the head of the doubly linked list
 *
 * Return: The length of the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *current = h;

	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
