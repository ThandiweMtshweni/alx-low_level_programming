#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: the first string
 * @s2: The second string
 *
 * Return: value less than 0, 0 or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int count, compare_value;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	compare_value = s1[count] - s2[count];
	return (compare_value);
}
