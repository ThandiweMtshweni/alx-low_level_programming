#include "main.h"
#include <stdlib.h>

/**
 * str_concat - the function concatinates strings
 * @s1: The first string
 * @s2: the second string
 * Return: pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed
 * by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	size_t a = 0, b = 0, c = 0, i = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	ptr = malloc(sizeof(char) * (a + b + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}
	for (i = 0; i <= b; i++)
	{
		ptr[c] = s2[i];
		c++;
	}
	return (ptr);
}
