#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a linked list.
 * @head: the start of the linked list
 * @n: the value to be added to the linked list
 *
 * Return: the address of the new element in the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		(*head = new_node);
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
