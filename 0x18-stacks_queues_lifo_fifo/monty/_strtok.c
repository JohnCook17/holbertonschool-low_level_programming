#include "monty.h"

void _strtok(char *line)
{
	char *input;
	char *delim = " ";
	int i = 0;

	input = strtok(line, delim);
	while (input && i < 2)
	{
		global.cmd[i] = input;
		input = strtok(NULL, delim);
		i++;
	}
}
