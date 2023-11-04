#include "hash_tables.h"

/**
 * hash_table_print - Print the key-value pairs from the hash table
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *bucket;
    int not_first = 0;

    if (!ht)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        bucket = ht->array[i];
        while (bucket)
        {
            if (not_first)
                printf(", ");
            printf("'%s': '%s'", bucket->key, bucket->value);
            not_first = 1;
            bucket = bucket->next;
        }
    }
    printf("}\n");
}
