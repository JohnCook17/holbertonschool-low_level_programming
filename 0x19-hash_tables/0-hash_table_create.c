#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(sizeof(hash_table_t));
    hash_node_t *ar[size];

    ht->size = size;
    ht->array = ar;

    return (ht);
}