#include "holberton.h"
/**
 * size - finds the size of a string
 * @s: string
 * @i: iterator
 *
 * Return: returns size
 */
int size(char *s, int i)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	i++;
	return (size(s, i));
}
/**
 * helper - a helper function that does the work
 * @s: string
 * @i: end
 * @j: start
 *
 *Return: 1 if pal 0 if not
 */
int helper(char *s, int i, int j)
{
	size(s, i);
	if (s[size(s, i) - 1] != s[j])
	{
		return (0);
	}
	else if (s[size(s, i) - 1] == s[j])
	{
		return (1);
	}
	else
	{
		return (0);
	}
	i--;
	j++;
	helper(s, i, j);
}
/**
 * is_palindrome - chechs if pal
 * @s: string
 *
 * Return: calls helper
 */
int is_palindrome(char *s)
{
	int i = 0, j = 0;

	return (helper(s, i, j));
}
