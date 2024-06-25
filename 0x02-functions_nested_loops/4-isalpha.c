#include "main.h"
/**
 * _isalpha - Checks alphabetic characters
 * @c: The character that will be checked
 * Return: 1 for alphabetic characters and 0 for other characters
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >=97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
