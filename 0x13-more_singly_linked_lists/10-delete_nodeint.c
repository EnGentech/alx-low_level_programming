#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a given index
 * @head: get the nodes
 * @index: get the index to be deleted
 * Return: return the nodes not deleted
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cp = *head;
	unsigned int i;

	if (cp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}

	while (i < (index - 1))
	{
		if (cp->next == NULL)
			return (-1);

		cp = cp->next;
		i++;
	}

	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);

	return (1);
}
