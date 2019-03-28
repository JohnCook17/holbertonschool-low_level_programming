#include "holberton.h"
/**
 * _isbinary - checks if number is 0 or 1
 * @b: char to check
 *
 * Return: 1 if true else 0
 */
int _isbinary(char b)
{
	if (b == '0' || b == '1')
		return (1);
	else
		return (0);
}
/**
 * _atoi - converts binary char string to unsigned int
 * @b: binary char string to convert
 *
 * Return: unsigned int of binary
 */
unsigned int _atoi(const char *b)
{
	unsigned int res = 0, i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (_isbinary(b[i]))
			res = res * 10 + b[i] - '0';
	}
	return (res);
}
/**
 * binary_to_uint - converts binary to decimal unsigned int
 * @b: binary char string to convert
 *
 * Return: the decimal unsigned int of a binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, digit, dec = 0, i = 0;

	n = _atoi(b);
	while (n != 0)
	{
		digit = n % 10;
		dec += digit << i;
		n = n / 10;
		i++;
	}
	return (dec);
}
