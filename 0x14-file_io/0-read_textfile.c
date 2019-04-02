#include "holberton.h"

/**
 * read_textfile - reads text from a file, puts it to stdout
 * @filename: filename
 * @letters: size of file to print
 * Return: 0 if fail, else the number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o = open(filename, O_RDONLY);
	int w = 0;
	char buf[1024];
	int r;

	if (o == -1)
		return (0);
	r = read(o, buf, letters);
	if (r <= 0)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);
	close(o);
	return (w);
}
