#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: the char
 * Return: NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		a[n] = str[n];
	}
	return (a);
}
