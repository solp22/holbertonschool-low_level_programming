#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to pointer for new node
 * @str: pointer to string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	last = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
