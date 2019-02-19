#include "holberton.h"
/**
 * _puts - puts a char
 * @str: string to put
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
