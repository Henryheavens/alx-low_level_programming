#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This reads a text file and prints it to STDOUT.
 * @filename: The text file to be read.
 * @letters: The number of letters to be read.
 * Return: The actual number of bytes read and printed,
 * or 0 if the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t t;
	ssize_t w;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
