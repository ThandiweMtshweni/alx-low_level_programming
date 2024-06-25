#include "main.h"

/**
 * _abs - computes the absolute value of and int
 * @i: The number to compute
 * Return: The absolute value of a number
 */

int _abs(int i)
{
	if (i < 0)
	{
	int abs_value;
	abs_value = i * -1;

	return (abs_value);
	}
	return (i);
}
