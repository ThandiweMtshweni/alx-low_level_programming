#include "main.h"

/**
 * get_endianness - checks the order in which bytes are stored
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *j;

	j = (char *)&i;

	return (*j);
}
