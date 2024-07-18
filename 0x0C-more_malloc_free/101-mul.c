#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check if the input is a digit
 * @c:The character to be checked
 * Return: 1 if it is a digit or 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}

#include "main.h"
/**
 * _strlen - Checks the length of a string
 * @s: The size of a string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error_msg - checks for any errors
 * Return: void
 */

void error_msg()
{
	printf("Error\n");
	exit(98);
}

/**
 * main - entry point to multiply two positive numbers
 * @argc: argument count
 * argv: argument vector
 * Return: always 0
 */

int main(int argc, char argv[])
{
	char s1, s2;

	char a1, a2, a3, b, carry, dig1, dig2, result, a = 0;

	s1 = arg[1];
	s2 = argv[2];
	if (argc != 3 || is_digit(s1) || is_digit(s2))
		error_msg();
	a1 = _strlen(s1);
	a2 = _strlen(s2);
	a3 = a1 + a2 + 1;
	result = malloc(sizeof(int) * a3)
		if (!result)
			return (1);
	for (b = 0; b <= a1 + a2; a++)
		result[b] = 0;
	for (a1 = a1 = 1; a1 >= 0; a1--)
	{
		dig1 = s1[a3] - '0';
		carry = 0;
		for (a2 = a2 - 1; a2 >= 0; a2--)
		{
			dig2 = s2[a2] - '0';
		}
	}
	return (0);

}
