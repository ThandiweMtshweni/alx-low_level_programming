#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	int x, i = 0;

	while (x < 1024)
	{
	if ((x % 3 == 0) || (x % 5 == 0))
	{
	i += x;
	}
	printf("%d\n", i);
	return (0);
	}
}
