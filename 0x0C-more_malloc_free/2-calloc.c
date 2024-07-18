#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of bloc of memory
 * @size: size of the element of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		pointer[a] = 0;
	return (pointer);
}
