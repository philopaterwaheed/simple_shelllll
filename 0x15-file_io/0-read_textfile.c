#include "main.h"
#include <stddef.h>

#include <stdlib.h>
/**
 * read_textfile - Reads a text file
 * @filename: filename
 * @letters: The number
 * Return: void
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}
