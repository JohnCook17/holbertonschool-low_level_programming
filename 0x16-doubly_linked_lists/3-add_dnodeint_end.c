#include "lists.h"

/**
 * add_dnodeint_end - inserts a new node at the end of a doubly linked list
 * @head: the head of the doubly linked list
 * @n: the value of the doubly linked list
 *
 * Return: NULL if malloc fails, new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *last = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = newnode;
	newnode->prev = last;
	return (newnode);
}
