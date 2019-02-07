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

	i = 0;

	while (i != 10)
	{
		putchar (i);
		i++;
	}

	return (0);
}
