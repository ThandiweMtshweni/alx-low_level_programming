#include "lists.h"
#include <stdio.h>

/**
 * free_list - function that frees a list_t list
 * @head: the head of the linked list
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *cur_node;

	while ((cur_node = head) != NULL)
	{
		head = head->next;
		free(cur_node->str);
		free(cur_node);
	}
}
