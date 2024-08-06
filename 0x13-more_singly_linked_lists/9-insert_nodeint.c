#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: pointer to the first node on the list
 * @idx: the index of the list where the new node
 * should be added. Index starts at 0
 * Return:  the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int num;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (num = 0; temp && num < idx; num++)
	{
		if (num == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
