#include "main.h"
/**
 * print_alphabet_x10 - Print alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 1; x <= 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
