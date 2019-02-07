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

	alpha = "0123456789abcdef\n";
	i = 0;

	while (i != 27)
	{
		putchar(alpha[i]);
		i++;
	}

	return (0);
}
