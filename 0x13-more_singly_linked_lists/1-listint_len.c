#include "lists.h"

/**
 * listint_len - list the number of elements in list
 *
 * @h: take the values of the node
 *
 * Return: return count
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
