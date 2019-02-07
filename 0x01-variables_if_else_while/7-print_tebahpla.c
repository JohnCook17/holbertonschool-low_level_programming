#include <stdio.h>

/**
 * main - A program to print alpha in rev
 * @void: void
 *
 * Description: A program to print the alphabet in reverse
 * section header: stdio
 * Return: returns 0
 */

int main(void)
{

	char *alpha;
	int i;

	alpha = "zyxwvutsrqponmlkjihgfedcba\n";
	i = 0;

	while (i != 27)
	{
		putchar(alpha[i]);
		i++;
	}

	return (0);
}
