#include "holberton.h"
/**
 * white_space - Fills in the white space in a times table.
 * @hund: hundreds place
 * @tens: tens place
 * @ones: ones place
 * @v: vertical collum, so as not to print befor the table.
 *
 * Description: Formats the times table below.
 * Return: 0 if all is well and 1 if not.
 */
int white_space(int hund, int tens, int ones, int v)
{
	if (hund > 0 && v > 0)
	{
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else if (tens > 0 && v > 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		return (0);
	}
	else if (ones >= 0 && v > 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		return (0);
	}
	else
	{
		return (1);
	}
}
/**
 * print_times_table - prints a times table
 * @n: the number the times table goes to.
 *
 * Description: prints a times table, had to split the one and tens places and
 * hundreds places.
 */
void print_times_table(int n)
{
	int h, v, res, ones, tens, hund;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (h = 0, v = 0;  h <= n && v <= n; )
	{
		res = h * v;
		ones = res % 10;
		tens = (res / 10) % 10;
		hund = res / 100;
		white_space(hund, tens, ones, v);
		if (hund != 0)
		{
			/*white_space(hund, tens, ones, v);*/
			_putchar('0' + hund);
		}
		if (tens != 0 || hund != 0)
		{
			/*white_space(hund, tens, ones, v);*/
			_putchar('0' + tens);
		}
		/*white_space(hund, tens, ones, v);*/
		_putchar('0' + ones);
		v++;
		if (v > n)
		{
			h++;
			v = 0;
			_putchar('\n');
		}
	}
}
