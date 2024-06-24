#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char num;

	for (num = '0'; num < 10; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num < 'g'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);

}
