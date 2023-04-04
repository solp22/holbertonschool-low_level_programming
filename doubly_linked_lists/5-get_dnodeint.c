#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: pointer to first node
 * @index: index fo the node
 * Return: address of element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
