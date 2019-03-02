#include <stdio.h>
#include <stdlib.h>
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
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	UNUSED(argc);
	printf("%i\n", num1 * num2);
	return (0);
}
