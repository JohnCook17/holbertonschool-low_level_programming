#include "holberton.h"
/**
 * helper - helper function
 * @s: string
 * @count: count
 * @i: index
 *
 * Return: returns count
 */
int helper(char *s, int count, int i)
{
	if (s[i] == '\0')
	{
		return (count);
	}
	i++;
	count++;
	return (helper(s, count, i));
}
/**
 * _strlen_recursion - finds the length of a string.
 * @s: string
 *
 * Return: count, checks for empty string too.
 */
int _strlen_recursion(char *s)
{
	int count = 0;
	int i = 0;

	return (helper(s, count, i));
}
