#include "lists.h"
/**
 * calcsize - calculates size of node
 * @node: pointer to node
 * Return: size of node
 */
unsigned int calcsize(dlistint_t *node)
{
	unsigned int size = 0;

	while (node != NULL)
	{
		node = node->next;
		size++;
	}
	return (size);
}

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
	unsigned int size = calcsize(*head);

	while (i < index)
	{
		del = del->next;
		i++;
	}
	if (size < index)
		return (-1);
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

