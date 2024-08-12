#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters to be printed
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t rd, wd;
	char *buff;

	if (!filename)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	rd = read(file_d, buff, letters);
	wd = write(STDOUT_FILENO, buff, rd);

	close(file_d);
	free(buff);
	return (wd);
}
