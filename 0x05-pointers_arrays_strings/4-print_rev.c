#include "main.h"

/**
 * print_rev - Prints a string in reverse mode
 * @s: The string to be printed
 * Return: Void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
		_putchar(s[a]);
	_putchar('\n');
}
