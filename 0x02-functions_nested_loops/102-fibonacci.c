#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	long x = 1, z = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%d", x);
	else if (i == 1)
	printf(", %d", z);
	else
	{
	z += x;
	x = z - x;
	printf(", %d", k);
	}
	i++;
	}
	printf("\n");
	return (0);
}
