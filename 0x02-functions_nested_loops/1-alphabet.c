#include "main.h"
/**
 * print_alphabet - Print the alphabets in lower case
 *
 * Return:void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

}
