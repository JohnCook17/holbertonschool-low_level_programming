#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to return the sum of all provided numbers
 * @n: number of args
 *
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(values, n);
	for (i = 0; i < n; i++)
		sum += va_arg(values, int);
	va_end(values);
	return (sum);
}
