#include "hash_tables.h"

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