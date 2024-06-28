#include "main.h"

/**
 * print_triangle - Prints the triangle
 * @size: Size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int num_rows, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_rows = 1; num_rows <= size; num_rows++)
		{
			for (space = size - num_rows; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= num_rows; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
