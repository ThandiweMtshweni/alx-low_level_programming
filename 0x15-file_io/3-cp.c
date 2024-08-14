#include "main.h"
#include <stdio.h>

/**
 * check_error - checks if the file is opened and handle the errors
 * @file_from: file to check and copy from
 * @file_to: the file to copy to
 * @argv: array of arguments
 * Return: Void
 */

void check_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err;
	ssize_t num_chars, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(file_from, file_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buff, 1024);
		if (num_chars == -1)
			check_error(-1, 0, argv);
		nwr = write(file_to, buff, num_chars);
		if (nwr == -1)
			check_error(0, -1, argv);
	}
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
