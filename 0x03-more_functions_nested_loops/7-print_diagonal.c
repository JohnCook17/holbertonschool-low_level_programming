#include "holberton.h"
/**
 * white_space - a recursive function to add white space
 * @i: how many white spaces to add.
 *
 * Return: allows the function to all itself
 */
int white_space(int i)
{
	if (i == 0)
	{
		return (0);
	}
	_putchar(' ');
	return (white_space(i - 1));
}
/**
 * print_diagonal - a program to print a diagonal line n long.
 * @n: how long to print the line.
 *
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				white_space(i);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
