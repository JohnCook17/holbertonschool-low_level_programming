#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - pow
 * @x: base
 * @y: power
 *
 * Return: return 1 if y is 0, -1 in neg, else base to power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
