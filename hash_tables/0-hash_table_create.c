#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size : size of the array
 * Return: a pointer to the hash table or null if it fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int counter = 0;
	hash_table_t *newtable;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);
	newtable->size = size;
	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	for (counter = 0; counter < size; counter++)
		newtable->array[counter] = NULL;
	return (newtable);
}
