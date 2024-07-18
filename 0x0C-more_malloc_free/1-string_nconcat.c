#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: is greater or equal to number of
 * elements to concstinate from s2
 * Return: NULL if the function fails and 0 otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *s;

	if (s1 != NULL)
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}
	else
	{
		a = 0;
	}
	if (s2 != NULL)
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	else
	{
		b = 0;
	}
	if (b > n)
	{
		b = n;
	}
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		s[c] = s1[c];
	}
	for (c = 0; c < b; c++)
	{
		s[c + a] = s2[c];
	}
	s[a + b] = '\0';
	return (s);
}
