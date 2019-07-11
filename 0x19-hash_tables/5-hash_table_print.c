#include "hash_tables.h"
/**
 * hash_table_print - prints a hashtable
 * @ht: the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;
	hash_node_t *node;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (first == 1)
			{
				printf("'%s': '%s'", node->key, node->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
