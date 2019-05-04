#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: the head of the doubly linked list
 *
 * Return: the number of elemets in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
