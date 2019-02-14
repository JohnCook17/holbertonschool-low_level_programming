#include "holberton.h"
/**
 * print_numbers - prints 0-9
 *
 */
void print_numbers(void)
{
	char *p;
	int i;

	p = "0123456789";
	for (i = 0; i < 10; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
}
