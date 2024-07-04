#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array pointer
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count, temp;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
