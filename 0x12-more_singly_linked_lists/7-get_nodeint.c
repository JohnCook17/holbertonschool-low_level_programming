#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the nth index
 * @head: the linked list
 * @index: the index of the linked list
 *
 * Return: the address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	if (i == index && !head)
		return (NULL);
	return (head);
}
