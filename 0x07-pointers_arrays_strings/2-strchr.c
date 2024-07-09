#include "main.h"

/**
 * _strchr - Locates a char in a string
 * @s: the string to be searched
 * @c: the char to be located
 *
 * Return: The char that was found or void otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
