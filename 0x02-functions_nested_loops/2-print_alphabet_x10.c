#include "holberton.h"

/**
 * print_alphabet_x10 - calls print_alphabet x10
 * @void: void
 *
 * Description: A function that calls print_alphabet x10
 */
void print_alphabet_x10(void)
{
	int j;
	int i;
	char *p;

	p = "abcdefghijklmnopqrstuvwxyz\n";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(p[i]);
		}
	}
}
