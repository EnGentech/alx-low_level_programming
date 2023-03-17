#include "lists.h"
/**
* get_dnodeint_at_index - function
* @head: pointer to first node in lnkd list
* @index: space in index to get node
*
* Description: function to return the nth node of a dbl lnkd list
* Return: nth node or if node doesn't exist, NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temph;
	unsigned int toindex = 0;

	temph = head;

	while (temph != NULL)
	{
		if (toindex == index)
			return (temph);
		toindex++;
		temph = temph->next;
	}
	if (toindex == 0 || toindex < index)
		return (temph);

	temph = head;
	return (temph->next);
}
