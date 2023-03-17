#include "lists.h"
/**
* dlistint_len - function
* @h: pointer to head node of list
*
* Description: function to return number of elements in a lnkd list
* Return: Number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
