#include "main.h"

/**
 * _memcpy - copies bytes from area to memory
 * @dest: The destination of memory area
 * @src: the source of memory
 * @n: the number of bytes to be copied
 *
 * Return: Poiter to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
