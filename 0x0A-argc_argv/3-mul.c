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
 * main - entry point, multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 for success and 1 for an error
 */

int main(int argc, char *argv[])
{
	int result, first_num, sec_num;

		if (argc < 3 || argc > 3)
		{
			printf("Error\n");
			return (1);
		}
		first_num = _atoi(argv[1]);
		sec_num = _atoi(argv[2]);
		result = first_num * sec_num;
		printf("%d\n", result);
		return (0);
}
