#include <stdio.h>

/**
 * main - Print sum of even fibonacci numbers
 * Return: void
 */

int main(void)
{
	int i = 0;
	long x = 1, z = 2, sum = z;

	while (z + x < 4000000)
	{
	z += x;
	if (z % 2 == 0)
	sum += z;
	x = z - x;
	i++;
	}
	printf("%ld\n", sum);
	return (0);

}
