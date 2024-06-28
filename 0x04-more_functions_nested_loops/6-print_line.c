#include "main.h"

/**
 * print_line - Draws a line
 * @n: determines how long the line will be
 * Return: Always 0
 * 
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
