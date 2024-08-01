#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: The list to be printed from list_t
 *
 * Return: the number of nodes on the list
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num++;
		h = h->pointer;
	}
	return (num);
}
