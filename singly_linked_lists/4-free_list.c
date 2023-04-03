#include "lists.h"

/**
 * free_list - frees list
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
