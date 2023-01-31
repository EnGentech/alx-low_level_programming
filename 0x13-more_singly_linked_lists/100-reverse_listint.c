#include "lists.h"

/**
 * reverse_listint - Reverses a list
 * @head: the start of the node
 *
 * Return: return the reversed nodes
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *beg, *end;

	if (head == NULL || *head == NULL)
		return (NULL);

	end = NULL;

	while ((*head)->next != NULL)
	{
		beg = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = beg;
	}

	(*head)->next = end;

	return (*head);

}
