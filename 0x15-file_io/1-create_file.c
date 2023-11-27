#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filename.
 * @text_content: content in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int rwr;
	int letters;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rwr = write(fd, text_content, letters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
