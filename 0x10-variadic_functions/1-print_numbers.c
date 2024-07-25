#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers followed by a new line
 * @separator: a comma separator between numbers to be printed
 * @n: numbers to be printed
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(pointer, const unsigned int);
		printf("%d", j);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pointer);
}
