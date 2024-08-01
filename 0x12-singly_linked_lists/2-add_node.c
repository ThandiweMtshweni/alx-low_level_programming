#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that returns the number
 * of elements in a linked list_t list
 * @head: The first node
 * @str: the string to be added to the node
 * Return: The address of the new list or NULL for fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int new_len = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	while (str[new_len])
		new_len++;
	temp->len = new_len;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
