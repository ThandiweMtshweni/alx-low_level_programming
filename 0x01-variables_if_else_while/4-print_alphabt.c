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
	int i;

	for (i = 0; i < 26; i++)
	{
		if (letter != 'e' || letter != 'q')
		{
			putchar(letter + i);
			i += 1;
		}
		else
		{
		 i += 1;
		}
	}
	putchar('\n');
	return (0);
}
