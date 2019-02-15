#include "holberton.h"
/**
 * white_space - inserts white space
 * @i: current state of loop, increments up to size
 * @size: see above.
 *
 * Return: 0 if done, calls self untill i >= size to fill spaces
 */
int white_space(int i, int size)
{
	if (i >= size)
	{
		return (0);
	}
	_putchar(' ');
	return (white_space(i + 1, size));
}
/**
 * triangle - inserts # for triangle
 * @i: current state of loop, how many # to place
 *
 * Return: 0 if done, calls self untill i <= 0
 */
int triangle(int i)
{
	if (i <= 0)
	{
		_putchar('\n');
		return (0);
	}
	_putchar('#');
	return (triangle(i - 1));
}
/**
 * print_triangle - calls other functions
 * @size: size of triangle to print
 *
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
		for (i = 0; i <= size; i++)
	{
		if (i > 0)
		{
			white_space(i, size);
		}
		if (i > 0 && i <= size)
		{
			triangle(i);
		}
	}
}
