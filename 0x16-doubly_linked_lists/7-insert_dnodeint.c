#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at idx into the doubly linked list
 * @h: the head of the doubly linked list
 * @idx: index to insert at
 * @n: data to insert
 *
 * Return: NULL if it fails, and newnode address uppon success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *newnode;
	dlistint_t *current = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
		if (i == idx)
			break;
	}
	if (current->next == NULL)
		return (NULL);
	newnode->next = current->next;
	current->next = newnode;
	newnode->prev = current;
	if (newnode->next != NULL)
		newnode->next->prev = newnode;
	return (newnode);
}
