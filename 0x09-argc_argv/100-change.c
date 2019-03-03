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
	int coins = 0, rem;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	if (atoi(argv[1]) / 25 > 0)
		coins += atoi(argv[1]) / 25;
	rem = atoi(argv[1]) % 25;
	if (rem / 10 > 0)
		coins += rem / 10;
	rem = (atoi(argv[1]) % 25) % 10;
	if (rem / 5 > 0)
		coins += rem / 5;
	rem = ((atoi(argv[1]) % 25) % 10) % 5;
	if (rem / 2 > 0)
		coins += rem / 2;
	rem = (((atoi(argv[1]) % 25) % 10) % 5) % 2;
	if (rem / 1 > 0)
		coins++;
	if (atoi(argv[1]) > 0)
		printf("%d\n", coins);
	return (0);
}
