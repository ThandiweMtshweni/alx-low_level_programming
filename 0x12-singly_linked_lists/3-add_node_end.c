#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new
 * node at the end of a list_t list.
 * @head: the head of the linked list
 * @str: the string where the list will be stored
 * Return: the address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cur_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
		new_node->len = i;
		new_node->next = NULL;
		cur_node = *head;
		if (cur_node == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (cur_node->next != NULL)
				cur_node = cur_node->next;
			cur_node->next = new_node;
		}
		return (*head);
}
