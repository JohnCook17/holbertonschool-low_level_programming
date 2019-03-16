#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * printchar - prints a char
 * @s: va_list
 */
void printchar(va_list s)
{
	printf("%c", va_arg(s, int));
}
/**
 * printint - prints an int
 * @s: va_list
 */
void printint(va_list s)
{
	printf("%i", va_arg(s, int));
}
/**
 * printfloat - prints a float
 * @s: va_list
 */
void printfloat(va_list s)
{
	printf("%f", va_arg(s, double));
}
/**
 * printstring - prints a string
 * @s: va_list
 */
void printstring(va_list s)
{
	char *strg;

	strg = va_arg(s, char *);
	if (strg == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", strg);
}
/**
 * print_all - prints chars, ints floats, strings
 * @format: type of arg
 */
void print_all(const char * const format, ...)
{
	form type[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	va_list statment;
	char *sep = "";

	va_start(statment, format);
	while (format[j] != '\0')
	{
		while (type[i].t)
		{
			if (format[j] == *type[i].t)
			{
				printf("%s", sep);
				type[i].func(statment);
				sep = ", ";
			}
			i++;
		}
		i = 0;
		j++;
	}
	printf("\n");
	va_end(statment);
}
