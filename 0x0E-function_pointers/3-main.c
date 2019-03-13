#include <stdio.h>
#include "function_pointers.h"

/**
 * main - controlls the function calls
 * @argc: the number of args must be 4
 * @argv the arguments the user supplies
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", n);
	return (0);
}
