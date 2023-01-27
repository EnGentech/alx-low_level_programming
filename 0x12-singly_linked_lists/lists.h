#ifndef LIMIT_H
#define LIMIT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - entry point for structure
 *@str: point to the node
 *@len: find out the length of the node
 *@next: move the next node
 */

typedef struct list_s

{
	char *str;
	unsigned int len;
	struct list_s *next;

} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _strlen(const char *s);
void before_main(void)__attribute__((constructor));

#endif
