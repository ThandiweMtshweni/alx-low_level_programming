#include "lists.h"
#include <stdlib.h>

/**
 * detete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list
 * @head: pointer to thee first element on the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *cur = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	cur = temp->next;
	temp->next = cur->next;
	free(cur);
	return (1);
}
