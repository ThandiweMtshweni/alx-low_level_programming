#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_num - checks if a string has any digits
 * @s: string array
 * Return: always 0
 */

int check_num(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include "main.h"

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
 * main - entry point, prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if is not digit or 0 otherwise
 */

int main(int argc, char *argv[])
{
	int counter, str_to_int, sum;

	sum = 0;
	counter = 1;

	while (counter < argc)
	{
		if (check_num(argv[counter]))
		{
			str_to_int = _atoi(argv[counter]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}

