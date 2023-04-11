#include "main.h"
#include <stddef.h>

#include <stdlib.h>
/**
 * _strlen - len
 * @str: string
 * Return: length
 */
size_t _strlen(char *str)
{
	size_t i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * append_text_to_file - Reads a text file
 * @filename: filename
 * @text_content: The number
 * Return: void
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t op, len;

	if (filename == NULL)
		return (0);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(op, text_content, _strlen(text_content));
	}

	close(op);
	if (len == -1)
		return (-1);
	return (1);
}
