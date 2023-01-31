#include "lists.h"

/**
 * free_listint - free the heads in the node
 * @head: free the head node
 */

void free_listint(listint_t *head)
{
	free(head);
}
