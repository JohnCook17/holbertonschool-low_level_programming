#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: chars to find in string
 *
 * Return: returns address of string where first match is found, no match = null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
