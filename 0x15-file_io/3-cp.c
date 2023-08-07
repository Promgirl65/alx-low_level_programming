#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function copies the content of the file
 * @argc: number of arguments passed
 * @argv: the argument array
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int cf, ct, i, a, b;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cf = open(argv[1], O_RDONLY);
	if (cf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ct = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(cf, buf, BUFSIZ)) > 0)
	{
		if (ct < 0 || write(ct, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(cf);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(cf);
	b = close(ct);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cf);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ct);
		exit(100);
	}
	return (0);
}
