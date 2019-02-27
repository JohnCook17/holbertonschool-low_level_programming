#include "holberton.h"
/**
 * factorial - finds the factorial of n
 * @n: number to find factorial of
 *
 * Return: returns factorial, -1 if negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
