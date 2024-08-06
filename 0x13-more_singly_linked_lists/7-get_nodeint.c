#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 * @head: the head of the linked list
 * @index: index of the node starting at 0
 * Return: pointer to the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int num = 0;

	while (num < index && temp)
	{
		temp = temp->next;
		num++;
	}
	return (temp ? temp : NULL);
}
