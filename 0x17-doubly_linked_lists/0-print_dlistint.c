#include "lists.h"
/**
* print_dlistint - function
* @h: string to print
*
* Description: Function to print all elements in dlistint_t list
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
