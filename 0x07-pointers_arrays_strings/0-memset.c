#include "main.h"

/**
 *_memset - fills in the first byte of memory with the constant byte b
 *@s: the the ponter
 *@b: the constant byte
 *@n: the bytes of memory area
 *Return: Memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
