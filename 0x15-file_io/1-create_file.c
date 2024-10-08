#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * @text_content: content written on the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, letters, rwr;

	if (!filename)
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	rwr = write(file_d, text_content, letters);
	if (rwr == -1)
		return (-1);
	close(file_d);
	return (1);
}
