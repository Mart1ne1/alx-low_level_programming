#include "main.h"

/**
 * read_textfile -reads a text file
 * @filename: filename.
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 * Otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nrd, nwr;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
