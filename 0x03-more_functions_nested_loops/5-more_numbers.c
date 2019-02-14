#include "holberton.h"
/**
 * more_numbers - prints 0 - 14.
 *
 */
void more_numbers(void)
{
	char *p;
	int i;
	int j;

	p = "01234567891011121314";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 20; i++)
		{
			_putchar(p[i]);
		}
		_putchar('\n');
	}
}
