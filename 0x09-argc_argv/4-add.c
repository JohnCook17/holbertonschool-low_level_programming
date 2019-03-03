#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i;
	int num;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 0 || argv[i][0] == '0')
		{
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	return (0);
}
