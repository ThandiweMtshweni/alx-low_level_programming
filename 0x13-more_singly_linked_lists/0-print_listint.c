#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: The total number of nodes on the list
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
