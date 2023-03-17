#include "lists.h"
/**
* free_dlistint - function
* @head: pointer to first node of dbl lnkd list
*
* Decription: function to free a a dbl lnkd list
* Return: 0 (success)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temph = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temph = head;
		head = head->next;
		free(temph);
	}
	free(head);
}
