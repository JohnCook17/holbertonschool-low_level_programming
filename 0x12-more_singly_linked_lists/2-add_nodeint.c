#include "lists.h"

/**
 * add_nodeint - adds a node to the start of a linked list of ints.
 * @head: the linked list to add to.
 * @n: the value to be added to the linked list.
 *
 * Return: the address of the new start of the linked list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
