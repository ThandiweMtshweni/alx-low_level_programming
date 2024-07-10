#include "main.h"

/**
 * _print_rev_recursion - the function prints a string in reverse
 * @s: the tring to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
