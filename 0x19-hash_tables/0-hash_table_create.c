#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the array in the hash table.
 * Return: NULL if fail, else ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	hash_node_t *ar[size];

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = ar;

	return (ht);
}
