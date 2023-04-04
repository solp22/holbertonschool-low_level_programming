#include "lists.h"

/**
 * dlistint_len - returns number of elements in list
 * @h: pointer to structure
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
