#include "holberton.h"

/**
 * append_text_to_file - adds text to end of file
 * @filename: filename
 * @text_content: text to append
 *
 * Return: 1, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, size = 0;

	if (!filename)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[size])
		size++;
	write(o, text_content, size);
	close(o);
	return (1);
}
