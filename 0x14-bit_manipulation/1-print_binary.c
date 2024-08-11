#include "main.h"

/**
 * _pow - calculate power
 * @num1: base number
 * @num2: the power
 * Return: value culculated
 */

unsigned long int _pow(unsigned int num1, unsigned int num2)
{
	unsigned long int power;
	unsigned int a;

	power = 1;
	for (a = 1; a <= num2; a++)
		power *= num1;
	return (power);
}

/**
 * print_binary - function that prints the binary representation of a numbe
 * @n: the number to be printed
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, chk;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		chk = n & div;
		if (chk == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
