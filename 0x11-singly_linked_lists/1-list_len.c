#include "lists.h"
/**
 * list_len - find the number of elements in a list.
 * @h: the list to find number of elements.
 *
 * Return: elements, number of elements in a list.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int elements = 0;

	while (temp)
	{
		temp = temp->next;
		elements++;
	}
	return (elements);
}
