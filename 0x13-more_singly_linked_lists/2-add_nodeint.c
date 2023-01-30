#include "lists.h"

/**
 * add_nodeint - add node to head
 *
 *@head: add node
 * @n: get values to be added
 *
 * Return: return added values
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
