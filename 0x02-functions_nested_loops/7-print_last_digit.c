#include "holberton.h"
/**
 * print_last_digit - prints the last digit
 * @d: variable to return the last digit of
 *
 * Description: uses % 10 to return and print the value of the last digit
 * Return: returns the value of the last digit
 */
int print_last_digit(int d)
{
	d = d % 10;
	if (d < 0)
	{
		d = d * -1;
	}
	_putchar('0' + d);
	return (d);
}
