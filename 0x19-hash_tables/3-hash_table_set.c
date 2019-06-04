#include "hash_tables.h"

void add_node(hash_table_t *ht, hash_node_t *node)
{
    unsigned long int i = key_index(node->key, ht->size);
    
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *node = malloc(sizeof(hash_node_t));

    if (node == NULL)
        return (0);
    node->value = strdup(value);
    node->key = strdup(key);
    add_node(ht, node);
    return (1);
}