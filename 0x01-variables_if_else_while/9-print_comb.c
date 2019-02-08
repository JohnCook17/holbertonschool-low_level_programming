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

	i = 48;

	while (i != 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar('\n');
		}
		i++;
	}

	return (0);
}
