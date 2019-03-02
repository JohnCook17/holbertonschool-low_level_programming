#include <stdio.h>
#include "holberton.h"

#define UNUSED(x) (void)(x)
/**
 * main - main
 * @argc: the number of char strings passed to main
 * @argv: the strings passed to main
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%i\n", argc - 1);
	return (0);
}
