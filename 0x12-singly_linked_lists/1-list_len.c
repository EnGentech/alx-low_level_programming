#include "lists.h"

/**
 * list_len - get the length of the nodes
 *
 *@h: this is the first node
 *
 * Return: return the number of elements found
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h  = h->next;
	}

	return (count);
}
