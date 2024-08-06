#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: The int fot the new node
 * Return: address of the new element and NULL for fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (*head);
}
