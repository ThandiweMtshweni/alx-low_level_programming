#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 * Return: Void
 */

void puts_half(char *str)
{
	int full_str, half_str;

	full_str = 0;
	while (str[full_str] != '\0')
		full_str++;

	half_str = full_str / 2;

	if (full_str % 2 == 1)
		half_str++;

	while (half_str < full_str)
	{
		_putchar(str[half_str]);
		half_str++;
	}
	_putchar('\n');
}
