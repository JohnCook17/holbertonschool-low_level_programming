#include <stdio.h>
/**
 * main - prints numbers
 * @void: void
 *
 * Description: prints numbers 0-9
 * section header: stdio
 * Return: returns 0
 */
int main(void)
{
	int i;

	i = 48;

	while (i != 58)
	{
		putchar (i);
		i++;
	}

	putchar ('\n');

	return (0);
}
