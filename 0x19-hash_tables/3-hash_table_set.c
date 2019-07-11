#include "hash_tables.h"
/**
 * add_node - adds a node to a hashtable.
 * @ht: the hashtable
 * @node: the node to add to the table.
 */
void add_node(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int i = key_index((unsigned char *)node->key, ht->size);
	hash_node_t *temp = ht->array[i];

	if (ht->array[i] != NULL)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (strcmp(temp->key, node->key) == 0)
				break;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			node->next = ht->array[i];
			ht->array[i] = node;
		}
		else
		{
			free(temp->value);
			temp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
	}
	else
	{
		node->next = NULL;
		ht->array[i] = node;
	}
}
/**
 * hash_table_set - sets the values of the node then passes to node add
 * @ht: the hash table
 * @key: the key to the hash table
 * @value: the value of the node
 * Return: 0 if malloc fails, 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	if (!ht || !key || !*key || !value)
		return (0);
	node = calloc(1, sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	if (node->value == NULL)
		free(node);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		free(node->value);
	}
	add_node(ht, node);
	return (1);
}
