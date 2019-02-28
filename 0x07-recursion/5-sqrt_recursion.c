#include "holberton.h"
/**
 * helper - helper function
 * @n: number to square root
 * @i: increment
 *
 * Return: returns 0 if 0, 1 if 1, and the sqrt of the number if it has one
 */
int helper(int n, int i)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	i++;
	return (helper(n, i));

}
/**
 * _sqrt_recursion - finds the sqrt of a number
 * @n: number
 *
 * Return: calls helper and returns that value
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (helper(n, i));
}
