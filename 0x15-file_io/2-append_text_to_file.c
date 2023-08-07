#include "main.h"

/**
 * append_text_to_file - function appends a text at the end of the file
 * @filename: name of file to append text
 * @text_content: string to be appended to file
 *
 * Return: 1 (success) or -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		n = write(fd, text_content, i);
		if (n != i)
			return (-1);
	}

	close(fd);

	return (1);
}
