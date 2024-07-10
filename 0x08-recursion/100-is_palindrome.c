#include "main.h"

/**
 * _strlen_recursion - checks the length of string
 * @s: the string
 * Returrn: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_str - compares each character of the string
 * @s: the string
 * @left: smallest iterator
 * @right: the largest iterator
 * Return: an integer
 */

int compare_str(char *s, int left, int right)
{
	if ((*s + left) == (*s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_str(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks for palindrome
 * @s: the string to be checked
 * Return: void
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_str(s, 0, _strlen_recursion(s) - 1));

}
