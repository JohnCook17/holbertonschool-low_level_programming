#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i = 0;

    printf("{");
    while (i < ht->size)
    {
        if (ht->array[i] != NULL)
        {
            if (ht->array[i]->key != NULL)
            {
                printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
            }
            if (ht->array[i]->next->key != NULL)
                printf(",");
        }
        i++;
    }
    printf("}\n");
}