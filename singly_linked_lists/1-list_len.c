#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: pointer to structure
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
