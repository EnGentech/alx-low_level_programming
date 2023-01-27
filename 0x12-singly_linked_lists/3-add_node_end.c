#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: this defines the head
 * @str: strings to be added to node
 *
 * Return: return new added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	temp = *head;
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}


/**
 * _strlen - get the length of string
 * @s: strings in view
 *
 * Return: return lenght of the string s.
 */

int _strlen(const char *s)
{

	int idx = 0;

	for (; s[idx]; idx++)
		;

	return (idx);
}
