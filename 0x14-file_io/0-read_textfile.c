#include "holberton.h"

/**
 * read_textfile -
 *
 * Return: 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o = open(filename, O_RDONLY);
	int w = 0;
	char buf[1024];
	int r;

	if (o == -1)
		return (0);
	if (buf == NULL)
		return (0);
	r = read(o, buf, letters);
	if (r <= 0)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	close(o);
	return (w);
}
