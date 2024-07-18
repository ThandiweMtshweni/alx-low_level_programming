#include "main.h"
#include <stdlib.h>

/**
 * free_grid: The main entry point
 * @grid: The input
 * @height:The input
 * Return: void
 */

void free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}


/**
 * strtow - spits a string into words
 * @str: The string to be splites
 * Return: Pointer to the memoey of new string
 */

char **strtow(char *str)
{
	char **counter;
	size_t c, height, a, b, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != " " && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
		counter = malloc(sizeof(char *) * (height = 1));
		if (counter == NULL)
		{
			free(counter);
			return (NULL);
		}
		for (a = a1 = 0; a < height; a++)
		{
			for (c = a1; str[c] != '\0'; c++)
			{
				if (str[c] == ' ')
					a1++;
				if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
				{
					counter[a] = malloc((c - a1 + 2) * sizeof(char));
					if (counter[a] == NULL)
					{
						free_grid(counter, a);
						return (NULL);
					}
					break;
				}
			}
			for (b = 0; a1 <= c; a1++, b++)
			{
				counter[a][b] = str[a1];
			}
		}
		counter[a][b] = '\0';
	}
	counter[a] = NULL;
	return (counter);
}
