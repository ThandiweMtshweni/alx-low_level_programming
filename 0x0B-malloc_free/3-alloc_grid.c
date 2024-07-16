#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: the width
 * @height: The height
 * Return: Pointer to array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **pointer;

	if (width  <= 0 || height <= 0)
	{
		return (NULL);
	}
	pointer = malloc(height * sizeof(int *));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		pointer[a] = malloc(width * sizeof(int));
		if (pointer[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(pointer);
			free(pointer[a]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			pointer[a][b] = 0;
		}
	}
	return (pointer);
}
