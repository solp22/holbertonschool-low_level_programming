#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp1;
	hash_node_t *temp2;

	for (i = 0; i < ht->size; i++)
	{
		temp1 = ht->array[i];
		while (temp1)
		{
			temp2 = temp1;
			temp1 = temp1->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
