#include "main.h"

/**
 * prime_num - checks if a number is a prime
 * @n: input
 * @x: divisor
 * Return: Always 0
 */

int prime_num(int n, int x)
{
	if (n <= 1 || (n != x && n % x == 0))
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	return (prime_num(n, x + 1));
}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
