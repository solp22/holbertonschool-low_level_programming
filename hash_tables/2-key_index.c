#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: index where the key is stored in array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
