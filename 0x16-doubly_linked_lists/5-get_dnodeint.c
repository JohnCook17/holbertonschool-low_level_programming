#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth index of a doubly linked list
 * @head: the head of a doubly linked list
 * @index: index n of doubly linked list
 *
 * Return: NULL if the node does not exist else the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	while (head && index != i)
	{
		i++;
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
