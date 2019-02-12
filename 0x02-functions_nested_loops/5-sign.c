#include "holberton.h"
/**
 * print_sign - prints the sign of a value
 * @n: an int to test if -, +, or 0
 *
 * Description: if 0 prints 0, if + prints +, if - prints -
 * Return: if 0 return 0, if + return 1, if - return -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
