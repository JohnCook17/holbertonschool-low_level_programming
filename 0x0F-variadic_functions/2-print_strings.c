#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a variable list of strings
 * @separator: characters to separate the variables
 * @n: the size of the list of variables
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list values;
	unsigned int i;
	char *s;

	va_start(values, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(values, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(values);
	printf("\n");
}
