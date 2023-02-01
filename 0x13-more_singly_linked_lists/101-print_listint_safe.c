#include "lists.h"

/**
 * print_listint_safe - entry point to print the nodes
 * @head: the head node
 *Return: return the nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *tmp;
	size_t i = 0;

	tmp = head;

	while (tmp != NULL)
	{
		i++;
		printf("[%lu] %d", &tmp, tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
