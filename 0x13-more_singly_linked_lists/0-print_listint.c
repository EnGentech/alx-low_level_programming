#include "lists.h"

/**
 * print_listint - main entry point to print linked list
 *
 * @h: get the integers to be printed in the nodes
 *
 * Return: return number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;


	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
