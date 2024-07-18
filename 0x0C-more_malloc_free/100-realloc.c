#include "main.h"
#include <stdlib.h>

/**
 * _realloc - re allocate a memory block
 * @ptr: old memory pointer
 * @old_size: old size allocated in memory block
 * @new_size: new size for the new memory block
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	size_t a, max = new_size;
	char *old_ptr = ptr;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (a = 0; a < max; a++)
	{
		pointer[a] = old_ptr[a];
	}
	free(ptr);
	return (pointer);

}
