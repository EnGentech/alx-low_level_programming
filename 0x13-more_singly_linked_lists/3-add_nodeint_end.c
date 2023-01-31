#include "lists.h"

/**
 * add_nodeint_end - add nodes at the end
 *
 * @head: point to the beggining of the nodes
 *
 * @n: get the new values
 * Return: return head content
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	tmp = *head;

	if (*head == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	tmp->next = newnode;
	}
	return (*head);
}
