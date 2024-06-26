#include <stdio.h>

/**
 * main - Print the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (success)
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
	x++;
	}
	printf("%d\n", i);
	return (0);
}
