#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The matrix of the integers
 * @size: The size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, first_sum = 0, sec_sum = 0;

	for (i = 0; i < size; i++)
	{
		first_sum += a[i];
		a += size;
	}
	a += size;

	for (i = 0; i < size; i++)
	{
		sec_sum += a[i];
		a += size;
	}
	printf("%d, %d\n", first_sum, sec_sum);
}
