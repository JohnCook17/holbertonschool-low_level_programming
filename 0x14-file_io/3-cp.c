#include "holberton.h"
/**
 * main - coppies contents of a file to another file
 * @argc: number of args
 * @argv: args values
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char buf[1024];
	int readfrom, writeto, cstatus = 0, rstatus = 1, wstatus;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	readfrom = open(argv[1], O_RDONLY);
	writeto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while (rstatus)
	{
		rstatus = read(readfrom, buf, 1024);
		if (rstatus == -1 || !argv[1] || readfrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wstatus = write(writeto, buf, rstatus);
		if (wstatus == -1 || writeto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cstatus = close(readfrom);
	if (cstatus == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", readfrom);
		exit(100);
	}
	cstatus = close(writeto);
	if (cstatus == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", writeto);
		exit(100);
	}
	return (0);
}
