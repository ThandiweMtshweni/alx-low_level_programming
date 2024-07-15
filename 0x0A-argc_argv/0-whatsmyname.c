#include "main.h"
#include <stdio.h>
/**
 * main - entry point that prints the name of the program
 * @argc: number of arguments
 * @argv: The array of arguments
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
