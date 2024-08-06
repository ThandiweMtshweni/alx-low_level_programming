#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t lis
 * @head: pointer to the address to the head of the list
 * @n: The integer
 * Returni: address of the new element or NULL for fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
