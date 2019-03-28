#include "holberton.h"


/**
 * print_binary -
 *
 * Return: 
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 1 << 31;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	while (mask > 0)
	{
		if (!(n & mask) == 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
}
