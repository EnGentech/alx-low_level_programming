#include <string.h>
#include "lists.h"

/**
 * add_node - Add new nodes at the beginnig
 * @head: head of nodes
 * @str: constant value
 *
 * Return: return pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}



/**
 * _strlen - entery point for the link list
 * @s: the string.
 *
 * Return: Retrun the legnth of string
 */

int _strlen(const char *s)
{

	int idx = 0;

	for (; s[idx]; idx++)
		;

	return (idx);

}
