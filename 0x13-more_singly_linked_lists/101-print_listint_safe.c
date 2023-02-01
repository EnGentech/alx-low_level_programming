#include "lists.h"

/**
 * print_listint_safe - entry point to print the nodes
 * @head: the head node
 *Return: return the nodes
 */

size_t print_listint_safe(const listint_t *head)
{
       	size_t i = 0;
	int chk;

	while (head)
	{
		chk = head - head->next;
		i++;

		printf("[%p] %d\n", (void *)&head, head->n);

		if (chk > 0)
			head = head->next;
		else
		{
			printf("->[%p] %d\n", (void *)&head, head->next->n);
			break;
		}
		return (i);
}
