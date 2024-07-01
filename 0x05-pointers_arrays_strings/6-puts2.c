#include "main.h"

/**
 * puts2 - prints every other characters of a string
 * @str: The string reference
 * Return: Always 0
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
