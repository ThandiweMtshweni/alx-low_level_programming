#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all parameters
 * @n: the number of arguments to be passed to the sum
 * Return: the sum or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list counter;

	va_start(counter, n);

	for (i = 0; i < n; i++)
	{
		if (n != 0)
		{
			sum += va_arg(counter, const unsigned int);
		}
		else if (n == 0)
		{
			return (0);
		}
	}
	va_end(counter);
	return (sum);
}
