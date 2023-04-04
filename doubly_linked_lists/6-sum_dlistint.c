#include "lists.h"
/**
 * sum_dlistint - returns a sum of all the data
 * @head: pointer to first node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
