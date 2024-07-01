#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints elements of an array
 * @a: The input array
 * @n: The length of the array
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i< n; i++)
	{
		printf("%d", a[i]);
		if (i != (n-1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
