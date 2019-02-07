#include <stdio.h>

/**
 * main - A program to print alpha
 * @void: void
 *
 * Description: A program to print the alphabet
 * section header: stdio
 * Return: returns 0
 */

int main(void)
{

	char *alpha;
	int i;

	alpha = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9$\n";
	i = 0;

	while (i != 30)
	{
		putchar(alpha[i]);
		i++;
	}

	return (0);
}
