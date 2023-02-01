#include "lists.h"

/**
 * print_listint_safe - entry point to print the nodes
 * @head: the head node
 *Return: return the nodes
 */

size_t print_listint_safe(const listint_t *head)
{
       	size_t i = 0;

	while (head != NULL)
	{
		i++;
		printf("[%p] %d",(void *)&head, head->n);
		head = head->next;
	}
	return (i);
}
