#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function that counts total number
 * of unique nodes
 * @head: the first element on the linked list
 * Return: number of uniwue nodes or 0 if list is not loopped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: the firs element of the linked list
 * Return: Number of nodes on the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

			if (nodes == 0)
			{
				for (; head != NULL; nodes++)
				{
					printf("[%p]%d\n", (void *)head, head->n);
					head = head->next;
				}
			}
			else
			{
				for (index = 0; index < nodes; index++)
				{
					printf("[%p] %d\n", (void *)head, head->n);
					head = head->next;
				}
				printf("->[%p]%d\n", (void *)head, head->n);
			}
			return (nodes);
}
