#include "lists.h"

/**
 * add node - add a node at the beginning of the list
 * @head: pointer to the pointer of first node
 * @str: pointer to string
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->len = strlen(str);
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;
	return (*head);
}
