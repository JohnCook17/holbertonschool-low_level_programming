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
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
