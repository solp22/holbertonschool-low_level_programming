#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of list
 * @head: pointer to pointer for first node
 * @n: integer
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	(*head) = new;
	return (*head);
}
