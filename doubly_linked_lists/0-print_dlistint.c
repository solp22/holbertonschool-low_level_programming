#include "lists.h"

/**
 * print_dlistint - prints all elements of doubly linked list
 * @h: pointer to structure
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
