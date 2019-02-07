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

	alpha = "0123456789";
	i = 0;

	while (i != 10)
	{
		putchar(alpha[i]);
		if (i == 9)
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(44);
			i++;
		}
	}

	return (0);
}
