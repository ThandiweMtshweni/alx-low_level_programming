#include "main.h"
/**
 * _strlen - Checks the length of a string
 * @s: The size of a string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
