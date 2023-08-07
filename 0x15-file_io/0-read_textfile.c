#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file and prints it to stdout
 * @filename: file name
 * @letters: the letters to be printed
 * Return: actual number of letters and 0 if function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, a, b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	b = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(fd);

	return (a);
}
