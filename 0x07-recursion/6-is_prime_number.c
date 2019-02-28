#include "holberton.h"
/**
 * helper - helper function to determine if prime
 * @n: number
 * @half: half of number
 * @i: itterator
 *
 * Return: 0 if not prime, 1 if prime
 */
int helper(int n, int half, int i)
{
	if (n % i == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	if (i == half)
	{
		return (1);
	}
	i++;
	return (helper(n, half, i));
}
/**
 * is_prime_number - if prime 1 else 0
 * @n: number
 *
 * Return: calls helper
 */
int is_prime_number(int n)
{
	int half = n / 2;
	int i = 2;

	return (helper(n, half, i));
}
