#include "main.h"

/*
 * _memset - fills a block of memory with a specific value
 *  @s: the starting address
 *  @b: the desired value
 *  @n: the number of bytes to be changed
 *  Return: number of bytes to be changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;

	}
	return (s);
}
