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

	int i;
	int n;

	i = 48;
	n = 48;

	while (n != 58)
	{

		while (i != 58)
		{
			putchar(n);
			putchar(i);
			putchar(44);
			putchar(32);
			i++;
		}
		if (i > 56)
		{
			i = 48;
		}
		n++;
	}
	putchar('\n');
	return (0);
}