#include "holberton.h"
/**
 * helper - helper function
 * @s: string
 * @i: iterator
 *
 * Return: used to terminate.
 */
void helper(char *s, int i)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	helper(s, i);
}

/**
 * _puts_recursion - puts the string followed by a newline
 * @s: string
 *
 * Return: void, just used for base case.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	helper(s, i);
}
