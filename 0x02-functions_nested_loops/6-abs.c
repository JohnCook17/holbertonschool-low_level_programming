#include "holberton.h"
/**
 * _abs - determines the absolute value of an int
 * @r: the number to be compaired
 *
 * Description: if r is negative turns it to positive
 * Return: Absolute value of r
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	return (r);
}
