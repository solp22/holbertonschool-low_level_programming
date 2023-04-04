#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: pointer to pointer of first node
 * @idx: index where node should be added
 * @n: integer
 * Return: the address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i = 0;

	current = (*h);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	
	for (i = 0; i < (idx - 1); i++)
	{
		current = current->next;
	}
	new->next = current->next;
	current->next = new;
	if (idx == 1)
		(*h) = new;
	new->n = n;
	return (*h);
}
