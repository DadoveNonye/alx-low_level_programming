#include "hash_tables.h"

/**
 * hash_table_delete - Frees a hash table and all its nodes
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *bucket, *aux_free;
    unsigned long int i = 0;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        bucket = ht->array[i];
        while (bucket)
        {
            aux_free = bucket;
            bucket = bucket->next;

            /* Free the key, value, and node */
            if (aux_free->key)
                free(aux_free->key);
            if (aux_free->value)
                free(aux_free->value);
            free(aux_free);
        }
    }

    /* Free the array and the hash table itself */
    free(ht->array);
    free(ht);
}
