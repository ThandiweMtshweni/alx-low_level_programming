#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lower_case + i);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upper_case + i);
	}
	putchar('\n');
	return (0);
}
