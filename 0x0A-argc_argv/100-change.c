#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The pointer converter
 * Return: an integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int ui = 0;
	int min = 1;
	int isi = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			isi = 1;
			ui = (ui * 10) + (s[i] - '0');
			i++;
		}
		if (isi == 1)
		{
			break;
		}
		i++;
	}
	ui *= min;
	return (ui);
}

/**
 * main - entry point, prints the minimum number of coins
 * to make change for an amount of money
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 on success and 1 for an error
 */

int main(int argc, char *argv[])
{
	int num, i, result;

	int coins[] = {25, 10, 5, 2, 1};

	result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = _atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
