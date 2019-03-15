#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a variable list of numbers
 * @separator: characters to separate the numbers
 * @n: the size of the list of variables
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list values;
	unsigned int i;

	va_start(values, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(values, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(values);
	printf("\n");
}
