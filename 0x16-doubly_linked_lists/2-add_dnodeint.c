#include "lists.h"

/**
 * add_dnodeint - adds a node to the start of a doubly linked list
 * @head: the head of the doubly linked list
 * @n: the value of the new node
 *
 * Return: NULL if malloc fails, else newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
