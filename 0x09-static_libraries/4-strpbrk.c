#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes
 * Return: Pointer to matched bytes if any, null otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
