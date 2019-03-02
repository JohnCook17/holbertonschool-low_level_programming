#include <stdio.h>
#include "holberton.h"
/**
 * main - main
 * @argc: number of args
 * @argv: value of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
