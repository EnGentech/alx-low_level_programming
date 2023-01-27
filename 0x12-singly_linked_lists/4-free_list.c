#include "lists.h"

/**
 * free_list - entry point to free malloc memory
 * @head: the head content
 *
 *Return: nothing
 */

void free_list(list_t *head)
{

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
