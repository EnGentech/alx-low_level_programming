#include "limit.h"

/**
 * print_list - entry point to print singly list values
 *
 * @h: print the content found
 *
 * Return: return values
 */

size_t print_list(const list_t *h)

{

	size_t count = 0;


	while (h != NULL)

	{

		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		count++;

	}

	return (count);

}
