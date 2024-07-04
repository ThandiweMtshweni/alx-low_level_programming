#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @*dest: The destination of the string pointer
 * @*src: The source of the string pointer
 * Return: The concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
