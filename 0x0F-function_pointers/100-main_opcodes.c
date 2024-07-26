#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function that prints the opcodes
 * @a: the address
 * @n: number of bytes to be printed
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: argument count
 * argv: argument vector
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
