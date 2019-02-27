#include "holberton.h"
/**
 * _strlen_recursion - finds the length of a string.
 * @s: string
 *
 * Return: count, checks for empty string too.
 */
int _strlen_recursion(char *s)
{
	static int count;
	static int i;

	if (s[i] == '\0')
	{
		return (count);
	}
	i++;
	count++;
	_strlen_recursion(s);
	return (count);
}
