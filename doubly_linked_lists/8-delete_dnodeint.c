#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of list
 * @head: pointer to first node
 * @index: position of node to be deleted
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;
	unsigned int i = 0;

	while (i < index)
	{
		del = del->next;
		i++;
	}
	if (*head == NULL || del == NULL)
		return (-1);
	if (*head == del)
		*head = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	free(del);
	return (1);
}

