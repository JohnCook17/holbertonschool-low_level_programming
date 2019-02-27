#include "holberton.h"
/**
 * helper - helper function
 * @s: string to reverse
 * @i: index
 *
 * Return: used to break only
 */
void helper(char *s, int i)
{
	if (s[i] == '\0')
	{
		return;
	}
	i++;
	helper(s, i);
	_putchar(s[i - 1]);
	i--;
}

/**
 * _print_rev_recursion - prints a string in rev
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	helper(s, i);
}
