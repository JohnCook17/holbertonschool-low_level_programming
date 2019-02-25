#include "holberton.h"
/**
 * _strchr - finds a char in string
 * @s: string
 * @c: char
 *
 * Return: Returns pointer to first occurance of char in string if found if not
 * then null
 */
char *_strchr(char *s, char c)
{
	int i;

	if ( c == '\0')
	{
		return (s);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
