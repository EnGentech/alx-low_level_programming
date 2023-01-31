#include "lists.h"

/**
 * pop_listint - remove the head node
 *
 * @head: remove the head
 *
 *Return: return the remaining nodes
 */

int pop_listint(listint_t **head)
{
	listint_t *del;

	del = *head;
	*head = *head->next;
	free(del);

	return (head);
}
