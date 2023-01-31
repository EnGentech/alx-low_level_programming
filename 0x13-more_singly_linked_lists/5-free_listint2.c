#include "lists.h"

/**
 * free_listint2 - free the head file with double pointer
 *
 * @head: clear the head and return to null
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
