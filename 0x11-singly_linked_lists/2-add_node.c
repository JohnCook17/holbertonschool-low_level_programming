#include "lists.h"

/**
 * add_node - adds a new node to the linked list at the start of the list
 * @head: the head of the list
 * @str: the value of the element of the list
 *
 * Return: new_node, or NULL if malloc fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *s = strdup(str);
	if (new_node == NULL)
		return (NULL);
	new_node->str = s;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
