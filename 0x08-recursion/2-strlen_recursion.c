#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: The string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = (1 + _strlen_recursion(s + 1));
		return (n);
	}
	return (0);
}
