#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - entry point program that copies the
 * content of a file to another file.
 * @argc: The argument counter
 * @argv: Argument passed
 * Return: 1 for success or exit
 */

int main(int argc, char *argv[])
{
	int src, dest, rd, wrt, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH;
	char buffer[1024];

	rd = 1024;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (rd == 1024)
	{
		rd = read(src, buffer, sizeof(buffer));
		if (rd == -1)
			check_IO_stat(-1, -1, argv[1], '0');
		wrt = write(dest, buffer, rd);
		if (wrt == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * check_IO_stat - function that checks a file should be opened or closed
 * @stat: file descriptor of file should be opened
 * @filename: the name of the file
 * @mode: close or open
 * @fd: file descriptor
 * Return: void
 */

void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", filename);
		exit(100);
	}
}
