#include "lists.h"

/**
 * sum_listint - on call, sum the values in the nodes
 * @head: get the values on the nodes
 * Return: return the sum of all nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
