#include "holberton.h"
/**
 * puts_half - puts the last half of a string
 * @str: string to put half of
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (j >= i / 2)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
