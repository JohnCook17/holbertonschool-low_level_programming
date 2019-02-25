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
	while(s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
