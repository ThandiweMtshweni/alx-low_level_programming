#include "main.h"
#include <stdlib.h>

/**
 * array_range - the function creates an array of integers
 * @min: the statring point
 * @max: the ending point
 * Return: Pointer to the new array created
 */

int *array_range(int min, int max)
{
	int a, b;
	int *pointer;

	if (min > max)
	{
		return (NULL);
	}
	b = max  - min + 1;
	pointer = malloc(sizeof(int) * b);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b; a++)
	{
		pointer[a] = min;
		min++;
	}
	return (pointer);
}
