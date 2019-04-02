#include "holberton.h"

/**
 * create_file -
 *
 * Return: 
 */
int create_file(const char *filename, char *text_content)
{
	int o, size = 0;

	if (!filename)
		return (-1);
	while (text_content[size])
		size++;
	o = open(filename, O_WRONLY | O_CREAT, 0600);
	if (o == -1)
		return (-1);
	write(o, text_content, size);
	return (1);
}
