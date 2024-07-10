#include "main.h"

/**
 * sqrt_calc - returns tha natural square root of a number
 * @n: input number
 * @x: iterator
 * Return: square root or -1
 */

int sqrt_calc(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (sqrt_calc(n, x + 1));
}
/**
 * _sqrt_recursion - function returns
 * the natural square root of a number
 * @n: the number
 * Return: the square root, 1 if n does not have a naturat square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_calc(n, 0));
}
