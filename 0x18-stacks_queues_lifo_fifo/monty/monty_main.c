#include "monty.h"

gv global;

int main (int argc, char **argv)
{
	char filename[128];
	char line[128]; /* max line length for monty*/
	if (argv[1] == NULL)
	{
		perror("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	strcpy(filename, argv[1]);
	global.line_number = 1;
	if (argc != 2)
	{
		perror("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	if (argv[1] != NULL)
	{
		FILE *file = fopen (filename, "r");
		if (file != NULL)
		{
			while (fgets (line, sizeof(line), file) != NULL)
			{
				_strtok(line);
				global.line_number += 1;
				print_cmd();
			}
			fclose(file);
		}
		else
		{
			perror("Error: Can't open file ");
			perror(argv[1]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		perror("Error: Can't open file ");
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}
	return (0);
}
