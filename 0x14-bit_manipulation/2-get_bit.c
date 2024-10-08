#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: Number to be checked
 * @index: the index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	checker = n & div;
	if (checker == div)
		return (1);
	return (0);
}
