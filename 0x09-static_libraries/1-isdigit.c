#include "main.h"

/**
 * _isdigit - Check if the input is a digit
 * @c:The character to be checked
 * Return: 1 if it is a digit or 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
