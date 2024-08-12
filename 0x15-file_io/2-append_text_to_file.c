#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to be added
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, letters, rwr;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(file_d, text_content, letters);
		if (rwr == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
