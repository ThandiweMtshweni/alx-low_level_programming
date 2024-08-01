#ifndef LINKED
#define LINKED

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct my_list - single linked list
 * @str: string
 * @len: the length of the string str
 * @pointer: pointer to the next node on the list
 *
 * Description: single linked list
 */
typedef struct my_list
{
	char *str;
	unsigned int len;
	struct my_list *pointer;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LINKED*/
