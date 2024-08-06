#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list
 * @head: the first node on the linked list
 * Return: the total sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
