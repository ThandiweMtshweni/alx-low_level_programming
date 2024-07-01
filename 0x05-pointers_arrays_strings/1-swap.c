#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
