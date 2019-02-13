#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints to 98
 * @n: a number
 *
 * Description: checks if a number is 98, or greater than 98, or less then 98
 * then counts to 98
 * section header: stdio.h and holberton.h
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
