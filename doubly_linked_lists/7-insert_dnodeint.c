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
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: pointer to pointer of first node
 * @idx: index where node should be added
 * @n: integer
 * Return: the address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = calcsize(*h);
	dlistint_t *temp = *h;
	dlistint_t *newnode;
	dlistint_t *temp2;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if (size < idx)
	{
		return (NULL);
	}

	if (idx == 0)
		add_dnodeint(h, n);
		return (*h);
	else if (idx == size)
		add_dnodeint_end(h, n);
	else
	{
		newnode->n = n;
		newnode->next = NULL;
		while (--idx)
			temp = temp->next;
		temp2 = temp->next;
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		temp2->prev = newnode;
		return (*newnode);
	}
}
