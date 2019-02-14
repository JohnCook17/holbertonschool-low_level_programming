#include "holberton.h"
/**
 * print_most_numbers - prints 0-9 except 2,4
 *
 */
void print_most_numbers(void)
{
	char *p;
	int i;

	p = "01356789";
	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
}
