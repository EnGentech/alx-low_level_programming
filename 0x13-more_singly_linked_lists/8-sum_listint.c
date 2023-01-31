#include "lists.h"

/**
 * sum_listint - on call, sum the values in the nodes
 * @head: get the values on the nodes
 * Return: return the sum of all nodes
 */

int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (i = 0; i <= head; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
