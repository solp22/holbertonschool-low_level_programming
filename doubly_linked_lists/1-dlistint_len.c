#include "lists.h"

/**
 * dlistint_len - returns number of elements in list
 * @h: pointer to structure
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
