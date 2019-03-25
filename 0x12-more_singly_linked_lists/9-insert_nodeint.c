#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at index n
 * @head: linked list to insert node into
 * @idx: index to insert at
 * @n: value to be inserted
 *
 * Return: NULL if fail, address of new neode if not
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *prev;


	if (new_node == NULL)
		return (NULL);
	prev = *head;
	while (i < idx && prev)
	{
		prev = prev->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	new_node->n = n;
	new_node->next = prev->next;
	prev->next = new_node;
	return (new_node);
}
