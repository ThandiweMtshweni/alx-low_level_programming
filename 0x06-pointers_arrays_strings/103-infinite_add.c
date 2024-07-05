#include "main.h"

/**
 * rev_str - reverse array
 * @n: integer params
 * Return: Always 0
 */

void rev_str(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - Adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: buffer that the function will use to store the results
 * @size_r: The buffer size
 * Return: 0 or r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - 0;
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - 0;
		temp = val1 + val2 + overflow;
		if (temp >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (r);
	*(r + digits) = '0';
	rev_str(r);
	return (r);
}
