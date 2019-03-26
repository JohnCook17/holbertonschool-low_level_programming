#include "lists.h"

/**
 * listint_len - finds the length of a linked list and returns the length
 * @h: linked to to find the length of.
 *
 * Return: the length of the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
