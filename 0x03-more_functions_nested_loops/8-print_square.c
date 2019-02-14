#include "holberton.h"
/**
 * print_square - prints a square n size
 * @size: n size of square.
 *
 */
void print_square(int size)
{
	int h, v;

	size = size - 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (h = 0, v = 0;  h <= size && v <= size; )
	{
		v++;
		_putchar('#');
		if (v > size)
		{
			h++;
			v = 0;
			_putchar('\n');
		}
	}
}
