#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char num;
	int letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);

}
