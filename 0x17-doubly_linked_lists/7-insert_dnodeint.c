#include "lists.h"
/**
* insert_dnodeint_at_index - function
* @h: double pointer to first node of dbl lnkd list
* @idx: index to where new node is added
* @n: data of new node
*
* Description: function to insert a new node at a given index
* Return: Address of new node or NULL if fail.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temph = *h;
	unsigned int toindex = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*h == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (toindex < idx - 1)
	{
		if (temph == NULL)
			return (NULL);
		temph = temph->next;
		toindex++;
	}
	if (temph->next == NULL)
	{
		temph->next = newNode;
		newNode->prev = temph;
		newNode->next = NULL;
		return (newNode);
	}
	newNode->next = temph->next;
	temph->next = newNode;
	newNode->prev = temph;
	newNode->next->prev = newNode;
	return (newNode);
}
