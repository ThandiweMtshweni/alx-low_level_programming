#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all
 * the arguments of the program
 * @ac: the argument counter
 * @av: the argument vector
 * Return: pointer to the array of char
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, c, i;

	c = 0;
	i = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			i++;
		}
	}
	i += ac;
	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
