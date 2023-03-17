#include "lists.h"
/**
* add_dnodeint - function
* @head: double pointer to first node
* @n: new node data to add
*
* Description: function to add new node to beginning of dbl lnkd list
* Return: Address of new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	int num = n;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = num;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
