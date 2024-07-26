#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds two numbers
 * @a: the first number
 * @b: the second number
 * Return: the total
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference
 */

int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - function that multiplies two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of the two numbers
 */

int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: the first number
 * @b: the second number
 * Return: the devision results
 */

int op_div(int a, int b)
{
        return (a / b);
}

/**
 * op_mod - function that adds two numbers
 * @a: the first number
 * @b: the second number
 * Return: the reminder of the two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
