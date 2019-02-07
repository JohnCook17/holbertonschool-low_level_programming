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
	char *caps;
	int i;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	i = 0;

	while (i != 26)
	{
		putchar(alpha[i]);
		i++;
	}
	i = 0;
	while (i != 27)
	{
		putchar(caps[i]);
		i++;
	}
	return (0);
}
