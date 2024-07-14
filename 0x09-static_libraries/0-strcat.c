#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: the destination value
 * @src: the source value
 * Return: dest value
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
