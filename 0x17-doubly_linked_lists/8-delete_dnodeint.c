#include "lists.h"
/**
* delete_dnodeint_at_index - function
* @head: double poitner to first node in lnkd list
* @index: index to where to delete
*
* Description: function that deletes the node at nth of a lnkd list
* Return: 1 Success, -1 Fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int idx = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = (*head)->next;
		temp->prev = NULL;
		/*free(temp);*/
		return (1);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (idx == index)
		{
			temp2 = temp->next;
			temp2->prev = temp->prev->prev;
			temp = temp2->prev;
			temp->next = temp2->next->next;
			/*free(temp2);*/
			return (1);
		}
		temp = temp->next;
		idx++;
	}
	if (idx < index)
		return (-1);
	if (temp->next == NULL)
		return (1);

	return (-1);
}
