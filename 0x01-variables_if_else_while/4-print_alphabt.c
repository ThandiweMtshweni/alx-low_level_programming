#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			letter += 1;
		}
		else
		{
			putchar(letter);
			letter += 1;
		}
	}
	putchar('\n');
	return (0);
}
