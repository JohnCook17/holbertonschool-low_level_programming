#include "hash_tables.h"
/**
 * hash_table_get - retrives a value from the hashtable.
 * @ht: the hashtable
 * @key: the key of the value to retrive
 * Return: NULL if key not found else value of key provided.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *tmpstr;
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	tmpstr = strdup(key);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, tmpstr) == 0)
			break;
		tmp = tmp->next;
	}
	free(tmpstr);
	if (tmp == NULL)
		return (NULL);
	return (tmp->value);
}
