#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in rev
 * @s: string
 *
 * Return: used to break only
 */
void _print_rev_recursion(char *s)
{
	static int i;

	if (s[i] == '\0')
	{
		i--;
		return;
	}
	i++;
	_print_rev_recursion(s);
	_putchar(s[i]);
	i--;
}
