#include "lists.h"

/**
 * print_list - prints all elements of linked list
 * @h: pointer to structure
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}
