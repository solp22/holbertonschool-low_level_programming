#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int counter = 0;
	hash_node_t *temp;
	char *space = "";

	if (ht == NULL)
		return;
	printf("{");
	while (counter < ht->size)
	{
		temp = ht->array[counter];
		while (temp)
		{
			printf("%s", space);
			printf("'%s': '%s'", temp->key, temp->value);
			space = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
