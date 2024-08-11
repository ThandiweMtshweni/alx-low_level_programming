#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	counter = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;
		if (curr & 1)
			counter++;
	}
	return (counter);
}
