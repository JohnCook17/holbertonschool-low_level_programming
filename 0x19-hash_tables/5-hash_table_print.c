#include "hash_tables.h"
/**
 * hash_table_print - prints a hashtable
 * @ht: the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->key != NULL)
			{
				if (first == 1)
				{
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					first = 0;
				}
				else
					printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			}
		}
		i++;
	}
	printf("}\n");
}
