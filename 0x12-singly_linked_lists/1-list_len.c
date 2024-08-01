#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: a linked list
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
