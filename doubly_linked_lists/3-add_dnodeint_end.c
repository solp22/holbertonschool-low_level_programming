#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of list
 * @head: pointer to pointer of first node
 * @n: integer
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	last = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
		new->prev = last;
	}
	return (*head);
}
